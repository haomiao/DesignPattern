///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   product.h
/// 	@brief	抽象产品对象. 
/// 
///		提供主要的抽象接口和部分实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  16:02:18
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PRODUCT_H_
#define     _PRODUCT_H_


class CProduct
{
public:

    CProduct();

    virtual ~CProduct();

public:

    virtual void DoSomething() = 0;
};


#endif  //  _PRODUCT_H_
