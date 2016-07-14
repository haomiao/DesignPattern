#include "stdafx.h"

#include "concrete_product_a.h"
#include "concrete_product_b.h"
#include "product_factory.h"


CProductFactory::CProductFactory()
{

}


CProductFactory::~CProductFactory()
{

}


CAbstractProduct* CProductFactory::CreateProductA()
{
    return new CConcreteProductA();
}


CAbstractProduct* CProductFactory::CreateProductB()
{
    return new CConcreteProductB();
}


CAbstractProduct * CProductFactory::CreateProduct( ProductConcrete productConcrete )
{
    CAbstractProduct * pProduct = nullptr;
    switch ( productConcrete )
    {
    case PC_PRODUCT_A:
        pProduct = new CConcreteProductA();
        break;
    case PC_PRODUCT_B:
        pProduct = new CConcreteProductB();
        break;
    default:
        break;
    }

    return pProduct;
}
