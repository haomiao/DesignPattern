///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   aggregate.h
/// 	@brief	聚合基类(容器基类). 
/// 
///		提供必要的供外部使用的简单接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  14:04:39
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _AGGREGATE_H_
#define     _AGGREGATE_H_

#include "iterator.h"

template<typename T>
class Aggregate
{
public:

    virtual ~Aggregate()
    {

    }

    //  创建顺序和反序迭代器
    virtual Iterator<T> * CreateIterator() = 0;
    virtual Iterator<T> * CreateReversalIterator() = 0;

protected:

    Aggregate()
    {

    }
};


#endif  //  _AGGREGATE_H_