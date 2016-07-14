///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   abstract_product_a.h
/// 	@brief	抽象产品基类A. 
/// 
///		提供基本的产品基类A，公共接口或部分公共实现  
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