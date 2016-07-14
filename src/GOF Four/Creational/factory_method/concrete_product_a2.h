///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_product_a2.h
/// 	@brief	产品实现类A2. 
/// 
///		实现类A2具体内容  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  16:10:47
///  
///  
/////////////////////////////////////////////////////////////////////


#include "product.h"

class CConcreteProductA2 : public CProduct
{
public:

    CConcreteProductA2();

    virtual ~CConcreteProductA2();

public:

    virtual void DoSomething();
};

