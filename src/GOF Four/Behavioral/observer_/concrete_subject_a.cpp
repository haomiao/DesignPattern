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
    //  ����Ҫ���������Ӹ���Ȥ�ĸı��¼�������ĳ���¼�����ʱ
    //  ֻ�Ը���Ȥ���¼��Ĺ۲��߸��¿��ṩЧ��
    //  ��Ȼ������ͨ�棬���Ƿ������۲����������
    //  ��������ʱ������Ҫ����һ����ǰ�ı��¼����͵ı�־��Update�ӿڻ�ǰĿ���ڲ�ά��
    //  ��ǰ�����ͱ�־
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
