///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   iterator.h
/// 	@brief	����������. 
/// 
///		�ṩ��һ��ĵ����������������Ļ����ӿ�  
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

    //  ���������������ӿ�
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() = 0;
    virtual T GetCurrentItem() = 0;

    //  ���ز����������
    virtual void operator ++() = 0;
    virtual void operator ++(int) = 0;

protected:

    Iterator()
    {

    }
};

#endif  //  _ITERATOR_H_