///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_product_a2.h
/// 	@brief	具体创建产品实例类A2. 
/// 
///		主要实现具体的产品实例类  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:27:47
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_PRODUCT_A2_H_
#define     _CONCRETE_PRODUCT_A2_H_

#include "abstract_product_a.h"

class CConcreteProductA2 : public CAbstractProductA
{
public:

    CConcreteProductA2();

    virtual ~CConcreteProductA2();

public:

    virtual void DoSomething();
};

#endif  //  _CONCRETE_PRODUCT_A2_H_