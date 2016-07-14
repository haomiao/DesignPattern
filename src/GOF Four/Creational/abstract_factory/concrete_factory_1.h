///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   product_factory_1.h
/// 	@brief	��Ʒ��������1. 
/// 
///		��Ʒ�������Դ�����ͬ��ϵ�в�Ʒ  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:42:46
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _PRODUCT_FACTORY_1_H_
#define     _PRODUCT_FACTORY_1_H_

#include "product_abstract_factory.h"

class CConcreteProductFactory1 : public CProductAbstractFactory
{
public:

    CConcreteProductFactory1();
    
    virtual ~CConcreteProductFactory1();

public:

    virtual CAbstractProductA* CreateProductA();
    virtual CAbstractProductB* CreateProductB();

};

#endif  //  _PRODUCT_FACTORY_1_H_