///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   creator.h
/// 	@brief	创建者抽象对象. 
/// 
///		主要提供创建者对象抽象接口和部分实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  16:03:57
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CREATOR_H_
#define     _CREATOR_H_

enum ProductType
{
    PT_PRODUCT_1,
    PT_PRODUCT_2,
    PT_PRODUCT_NUM,
};


class CProduct;

class CCreator
{
public:

    CCreator();

    virtual ~CCreator();

public:

    //  创建产品，可以返回默认的某个子类实现或者nullptr
    virtual CProduct * CreateProduct( ProductType productType = PT_PRODUCT_NUM );
};


#endif  //  _CREATOR_H_
