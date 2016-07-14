///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_reversal_iterator.h
/// 	@brief	某个反序的具体迭代器子类. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  14:11:59
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _CONCRETE_REVERSAL_ITERATOR_H_
#define     _CONCRETE_REVERSAL_ITERATOR_H_

#include "iterator.h"

template<typename T>
class ConcreteAggregate1;

template<typename T>
class ConcreteReversalIterator : public Iterator<T>
{
public:

    ConcreteReversalIterator( ConcreteAggregate1<T> *paggregate );

    virtual ~ConcreteReversalIterator();

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
ConcreteReversalIterator<T>::ConcreteReversalIterator( ConcreteAggregate1<T> *paggregate ) :
paggregate_(paggregate)
{
    current_ = paggregate_->GetCount() - 1;
}


template<typename T>
ConcreteReversalIterator<T>::~ConcreteReversalIterator()
{

}


template<typename T>
void ConcreteReversalIterator<T>::First()
{
    current_ = paggregate_->GetCount() - 1;
}


template<typename T>
void ConcreteReversalIterator<T>::Next()
{
    --current_;
}


template<typename T>
bool ConcreteReversalIterator<T>::IsDone()
{
    if ( current_ > paggregate_->GetCount() )
    {
        return true;
    }
    return false;
}


template<typename T>
T ConcreteReversalIterator<T>::GetCurrentItem()
{
    return paggregate_->GetIndex( current_ );
}


template<typename T>
void ConcreteReversalIterator<T>::operator ++( )
{
    --current_;
}

template<typename T>
void ConcreteReversalIterator<T>::operator ++( int )
{
    operator++();
}

#endif  //  _CONCRETE_REVERSAL_ITERATOR_H_