///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_product_b1.h
/// 	@brief	��Ʒʵ����B1. 
/// 
///		ʵ����B1��������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  16:10:47
///  
///  
/////////////////////////////////////////////////////////////////////


#include "product.h"

class CConcreteProductB1 : public CProduct
{
public:

    CConcreteProductB1();

    virtual ~CConcreteProductB1();

public:

    virtual void DoSomething();
};

