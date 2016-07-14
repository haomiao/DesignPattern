///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_iterator.h
/// 	@brief	某个具体的迭代器子类. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  14:11:59
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _CONCRETE_ITERATOR_H_
#define     _CONCRETE_ITERATOR_H_

#include "iterator.h"

template<typename T>
class ConcreteAggregate1;

template<typename T>
class ConcreteIterator : public Iterator<T>
{
public:

    ConcreteIterator( ConcreteAggregate1<T> *paggregate );

    virtual ~ConcreteIterator();

public:

    virtual void First();
    virtual void Next();
    virtual bool IsDone();
    virtual T GetCurrentItem();

    virtual void operator ++();
    virtual void operator ++(int);

private:

    ConcreteAggregate1<T> * paggregate_;
    unsigned int            current_;
};


template<typename T>
ConcreteIterator<T>::ConcreteIterator( ConcreteAggregate1<T> *paggregate ) :
paggregate_(paggregate),
current_(0)
{

}


template<typename T>
ConcreteIterator<T>::~ConcreteIterator()
{

}


template<typename T>
void ConcreteIterator<T>::First()
{
    current_ = 0;
}


template<typename T>
void ConcreteIterator<T>::Next()
{
    ++current_;
}


template<typename T>
bool ConcreteIterator<T>::IsDone()
{
    if (current_ >= paggregate_->GetCount() )
    {
        return true;
    }
    return false;
}


template<typename T>
T ConcreteIterator<T>::GetCurrentItem()
{
    return paggregate_->GetIndex( current_ );
}


template<typename T>
void ConcreteIterator<T>::operator ++( )
{
    ++current_;
}

template<typename T>
void ConcreteIterator<T>::operator ++( int )
{
    operator++();
}

#endif  //  _CONCRETE_ITERATOR_H_