///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   product_factory_2.h
/// 	@brief	产品工厂基类2. 
/// 
///		产品工厂，以创建不同的系列产品  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:42:46
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _PRODUCT_FACTORY_2_H_
#define     _PRODUCT_FACTORY_2_H_

#include "product_abstract_factory.h"

class CConcreteProductFactory2 : public CProductAbstractFactory
{
public:

    CConcreteProductFactory2();
    
    virtual ~CConcreteProductFactory2();

public:

    virtual CAbstractProductA* CreateProductA();
    virtual CAbstractProductB* CreateProductB();

};

#endif  //  _PRODUCT_FACTORY_1_H_