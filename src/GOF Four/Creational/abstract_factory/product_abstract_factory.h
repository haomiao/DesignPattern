///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   product_abstract_factory.h
/// 	@brief	产品工厂. 
/// 
///		简单的产品工厂，以创建不同的系列产品  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:42:46
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _PRODUCT_ABSTRACT_FACTORY_H_
#define     _PRODUCT_ABSTRACT_FACTORY_H_


class CAbstractProductA;
class CAbstractProductB;

class CProductAbstractFactory
{
public:

    CProductAbstractFactory()
    {

    }
    
    virtual ~CProductAbstractFactory()
    {

    }

public:

    virtual CAbstractProductA* CreateProductA() = 0;
    virtual CAbstractProductB* CreateProductB() = 0;

private:

    CProductAbstractFactory( const CProductAbstractFactory & );
    CProductAbstractFactory & operator = ( const CProductAbstractFactory & );
};

#endif  //  _PRODUCT_ABSTRACT_FACTORY_H_