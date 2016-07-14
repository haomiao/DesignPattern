///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   aggregate.h
/// 	@brief	�ۺϻ���(��������). 
/// 
///		�ṩ��Ҫ�Ĺ��ⲿʹ�õļ򵥽ӿ�  
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

    //  ����˳��ͷ��������
    virtual Iterator<T> * CreateIterator() = 0;
    virtual Iterator<T> * CreateReversalIterator() = 0;

protected:

    Aggregate()
    {

    }
};


#endif  //  _AGGREGATE_H_