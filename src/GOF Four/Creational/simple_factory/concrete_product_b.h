///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   ConcreteProductB.h
/// 	@brief	具体创建产品实例类B. 
/// 
///		主要实现具体的产品实例类  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:27:47
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_PRODUCT_B_H_
#define     _CONCRETE_PRODUCT_B_H_

#include "abstract_product.h"

class CConcreteProductB : public CAbstractProduct
{
public:

    CConcreteProductB();

    virtual ~CConcreteProductB();

public:

    virtual void DoSomething();
};

#endif  //  _CONCRETE_PRODUCT_B_H_