///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_product_b1.h
/// 	@brief	产品实现类B2. 
/// 
///		实现类B2具体内容  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  16:10:47
///  
///  
/////////////////////////////////////////////////////////////////////


#include "product.h"

class CConcreteProductB2 : public CProduct
{
public:

    CConcreteProductB2();

    virtual ~CConcreteProductB2();

public:

    virtual void DoSomething();
};

