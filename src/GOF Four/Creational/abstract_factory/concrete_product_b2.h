///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_product_b2.h 
/// 	@brief	具体创建产品实例类B2. 
/// 
///		主要实现具体的产品实例类  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:27:47
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_PRODUCT_B2_H_
#define     _CONCRETE_PRODUCT_B2_H_

#include "abstract_product_b.h"

class CConcreteProductB2 : public CAbstractProductB
{
public:

    CConcreteProductB2();

    virtual ~CConcreteProductB2();

public:

    virtual void DoSomething();
};

#endif  //  _CONCRETE_PRODUCT_B2_H_