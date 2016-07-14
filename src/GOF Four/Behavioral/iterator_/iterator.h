///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   iterator.h
/// 	@brief	迭代器基类. 
/// 
///		提供最一般的迭代器操作、遍历的基础接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  13:59:55
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _ITERATOR_H_
#define     _ITERATOR_H_

template<typename T>
class Iterator
{
public:

    virtual ~Iterator()
    {

    }

public:

    //  迭代器基础操作接口
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() = 0;
    virtual T GetCurrentItem() = 0;

    //  重载操作运算符号
    virtual void operator ++() = 0;
    virtual void operator ++(int) = 0;

protected:

    Iterator()
    {

    }
};

#endif  //  _ITERATOR_H_