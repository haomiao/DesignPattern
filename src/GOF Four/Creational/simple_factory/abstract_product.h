///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   abstract_productA.h
/// 	@brief	抽象产品基类. 
/// 
///		提供基本的产品基类，公共接口或部分公共实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:31:52
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _ABSTRACT_PRODUCT_H_
#define     _ABSTRACT_PRODUCT_H_

class CAbstractProduct
{
public:

    CAbstractProduct()
    {

    };

    virtual ~CAbstractProduct()
    {

    };

public:

    virtual void DoSomething() = 0;

private:

    CAbstractProduct(const CAbstractProduct &);
    CAbstractProduct & operator = ( const CAbstractProduct & );
};

#endif  //  _ABSTRACT_PRODUCT_H_