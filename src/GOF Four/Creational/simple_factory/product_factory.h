///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   product_factory.h
/// 	@brief	��Ʒ����. 
/// 
///		�򵥵Ĳ�Ʒ�������Դ�����ͬ�Ĳ�Ʒ  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:42:46
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _PRODUCT_FACTORY_H_
#define     _PRODUCT_FACTORY_H_

//  ��Ʒö��
enum ProductConcrete
{
    PC_PRODUCT_A,       //  ��ƷA
    PC_PRODUCT_B,       //  ��ƷB
};


class CAbstractProduct;

class CProductFactory
{
public:

    CProductFactory();
    
    virtual ~CProductFactory();

public:

    CAbstractProduct* CreateProductA();
    CAbstractProduct* CreateProductB();

public:

    CAbstractProduct * CreateProduct( ProductConcrete productConcrete);

private:

    CProductFactory( const CProductFactory & );
    CProductFactory & operator = ( const CProductFactory & );
};

#endif  //  _PRODUCT_FACTORY_H_