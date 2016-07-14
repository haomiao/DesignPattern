///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_aggregate_1.h
/// 	@brief	某个具体的容器子类. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  14:11:59
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _CONCRETE_AGGREGATE_H_
#define     _CONCRETE_AGGREGATE_H_

#include <vector>
#include <stdexcept>
#include "aggregate.h"
#include "concrete_iterator.h"
#include "concrete_reversal_iterator.h"

template<typename T>
class ConcreteAggregate1 : public Aggregate<T>
{
public:

    ConcreteAggregate1();

    virtual ~ConcreteAggregate1();

public:

    virtual Iterator<T> * CreateIterator();
    virtual Iterator<T> * CreateReversalIterator();

    //  一些比较常用的容器接口
    void PushBack(T data);
    void PopBack();
    T TopBack();
    T GetIndex( unsigned int index );
    unsigned int GetCount();
    void Clear();
    bool Empty();

private:

    //  暂时以vector作为底层基础容器,当然也可以自己实现的容器
    std::vector<T>  data_vec_;

};

template<typename T>
ConcreteAggregate1<T>::ConcreteAggregate1()
{

}


template<typename T>
ConcreteAggregate1<T>::~ConcreteAggregate1()
{
    data_vec_.clear();
}


template<typename T>
Iterator<T> * ConcreteAggregate1<T>::CreateIterator()
{
    return new ConcreteIterator<T>( this );
}


template<typename T>
Iterator<T> * ConcreteAggregate1<T>::CreateReversalIterator()
{
    return new ConcreteReversalIterator<T>( this );
}

template<typename T>
void ConcreteAggregate1<T>::PushBack( T data )
{
    data_vec_.push_back( data );
}


template<typename T>
void ConcreteAggregate1<T>::PopBack()
{
    data_vec_.pop_back();
}


template<typename T>
T ConcreteAggregate1<T>::TopBack()
{
    data_vec_.erase(data_vec_.back() );
}


template<typename T>
T ConcreteAggregate1<T>::GetIndex( unsigned int index )
{
    if ( index >= data_vec_.size() )
    {
        throw std::out_of_range( "out or range!" );
    }

    return data_vec_[index];
}


template<typename T>
unsigned int ConcreteAggregate1<T>::GetCount()
{
    return data_vec_.size();
}


template<typename T>
void ConcreteAggregate1<T>::Clear()
{
    data_vec_.clear();
}


template<typename T>
bool ConcreteAggregate1<T>::Empty()
{
    return data_vec_.empty();
}

#endif  //  _CONCRETE_AGGREGATE_H_