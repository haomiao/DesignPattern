///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   abstract_product_a.h
/// 	@brief	�����Ʒ����A. 
/// 
///		�ṩ�����Ĳ�Ʒ����A�������ӿڻ򲿷ֹ���ʵ��  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:31:52
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _ABSTRACT_PRODUCT_A_H_
#define     _ABSTRACT_PRODUCT_A_H_

class CAbstractProductA
{
public:

    CAbstractProductA()
    {

    }

    virtual ~CAbstractProductA()
    {

    }

public:

    virtual void DoSomething() = 0;

private:

    CAbstractProductA( const CAbstractProductA & );
    CAbstractProductA & operator = ( const CAbstractProductA & );
};

#endif  //  _ABSTRACT_PRODUCT_A_H_