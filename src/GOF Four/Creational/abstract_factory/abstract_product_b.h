///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   abstract_product_b.h
/// 	@brief	�����Ʒ����B. 
/// 
///		�ṩ�����Ĳ�Ʒ����B�������ӿڻ򲿷ֹ���ʵ��  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:31:52
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _ABSTRACT_PRODUCT_B_H_
#define     _ABSTRACT_PRODUCT_B_H_

class CAbstractProductB
{
public:

    CAbstractProductB()
    {

    }

    virtual ~CAbstractProductB()
    {

    }

public:

    virtual void DoSomething() = 0;

private:

    CAbstractProductB( const CAbstractProductB & );
    CAbstractProductB & operator = ( const CAbstractProductB & );
};

#endif  //  _ABSTRACT_PRODUCT_B_H_