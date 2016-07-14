#include "stdafx.h"

#include "concrete_product_a2.h"
#include "concrete_product_b2.h"
#include "concrete_factory_2.h"


CConcreteProductFactory2::CConcreteProductFactory2()
{

}


CConcreteProductFactory2::~CConcreteProductFactory2()
{

}


CAbstractProductA* CConcreteProductFactory2::CreateProductA()
{
    return new CConcreteProductA2();
}


CAbstractProductB* CConcreteProductFactory2::CreateProductB()
{
    return new CConcreteProductB2();
}

