///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   product_factory.h
/// 	@brief	产品工厂. 
/// 
///		再次通过简单的产品工厂，以创建不同的产品工厂  
//      封装工厂实现类，这样客户就可以只需要知道抽象工厂和抽象产品了，即：
//      简单工厂 + 抽象工厂，可实现更强大的灵活性和可扩展的一种折中
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:42:46
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _PRODUCT_FACTORY_H_
#define     _PRODUCT_FACTORY_H_

//  产品工厂枚举
enum ProductFactoryConcrete
{
    PC_PRODUCT_FACTORY_1,       //  产品工厂1
    PC_PRODUCT_FACTORY_2,       //  产品工厂2
};


class CProductAbstractFactory;

//  以下的产品工厂，既可以通过参数化创建工厂也可以通过接口创建相应工厂
//  另外，事实上对于工厂创建产品，也可以通过参数化创建
//  类似于使用工厂方法来实现抽象工厂
class CProductFactory
{
public:

    CProductFactory();
    
    virtual ~CProductFactory();

public:

    CProductAbstractFactory* CreateProductFactory1();
    CProductAbstractFactory* CreateProductFactory2();

public:

    CProductAbstractFactory * CreateProductFactory( ProductFactoryConcrete productFactoryConcrete );

private:

    CProductFactory( const CProductFactory & );
    CProductFactory & operator = ( const CProductFactory & );
};

#endif  //  _PRODUCT_FACTORY_H_