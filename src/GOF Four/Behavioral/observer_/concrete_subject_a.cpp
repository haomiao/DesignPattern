#include "stdafx.h"

#include "base_observer.h"
#include "concrete_subject_a.h"


CConcreteSubjectA::CConcreteSubjectA():
data_(0)
{

}


CConcreteSubjectA::~CConcreteSubjectA()
{
    observer_list_.clear();
}


void CConcreteSubjectA::AttachObserver( CBaseObserver *pobserver )
{
    observer_list_.push_back( pobserver );
}


void CConcreteSubjectA::DetachObserver( CBaseObserver *pobserver )
{
    observer_list_.remove( pobserver );
}


void CConcreteSubjectA::NotifyAll()
{
    //  若需要，可以增加感兴趣的改变事件，这样某个事件发生时
    //  只对感兴趣的事件的观察者更新可提供效率
    //  当然，若均通告，则是否处理交给观察者自身决定
    //  不过，此时可能需要增加一个当前改变事件类型的标志至Update接口或当前目标内部维持
    //  当前的类型标志
    ObserverList::iterator it = observer_list_.begin();
    ObserverList::iterator end = observer_list_.end();
    for ( ; it != end; ++it )
    {
        (*it)->Update( this );
    }
}


int  CConcreteSubjectA::GetChangedData()
{
    return data_;
}


void CConcreteSubjectA::SetData( int data )
{
    data_ = data;
    NotifyAll();
}
