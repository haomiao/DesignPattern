///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_product_a1.h
/// 	@brief	��Ʒʵ����A1. 
/// 
///		ʵ����A1��������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  16:10:47
///  
///  
/////////////////////////////////////////////////////////////////////


#include "product.h"

class CConcreteProductA1 : public CProduct
{
public:

    CConcreteProductA1();

    virtual ~CConcreteProductA1();

public:

    virtual void DoSomething();
};

