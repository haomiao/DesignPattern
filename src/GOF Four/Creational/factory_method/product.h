///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   product.h
/// 	@brief	�����Ʒ����. 
/// 
///		�ṩ��Ҫ�ĳ���ӿںͲ���ʵ��  
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
