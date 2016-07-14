#include "stdafx.h"

#include "concrete_factory_1.h"
#include "concrete_factory_2.h"
#include "product_factory.h"


CProductFactory::CProductFactory()
{

}


CProductFactory::~CProductFactory()
{

}


CProductAbstractFactory* CProductFactory::CreateProductFactory1()
{
    return new CConcreteProductFactory1();
}


CProductAbstractFactory* CProductFactory::CreateProductFactory2()
{
    return new CConcreteProductFactory2();
}


CProductAbstractFactory * CProductFactory::CreateProductFactory( ProductFactoryConcrete productFactoryConcrete )
{
    CProductAbstractFactory * pProductFactory = nullptr;
    switch ( productFactoryConcrete )
    {
    case PC_PRODUCT_FACTORY_1:
        pProductFactory = new CConcreteProductFactory1();
        break;
    case PC_PRODUCT_FACTORY_2:
        pProductFactory = new CConcreteProductFactory2();
        break;
    default:
        break;
    }

    return pProductFactory;
}
