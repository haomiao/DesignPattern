///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_product_a1.h
/// 	@brief	���崴����Ʒʵ����A1. 
/// 
///		��Ҫʵ�־���Ĳ�Ʒʵ����  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:27:47
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_PRODUCT_A1_H_
#define     _CONCRETE_PRODUCT_A1_H_

#include "abstract_product_a.h"

class CConcreteProductA1 : public CAbstractProductA
{
public:

    CConcreteProductA1();

    virtual ~CConcreteProductA1();

public:

    virtual void DoSomething();
};

#endif  //  _CONCRETE_PRODUCT_A1_H_