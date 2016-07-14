#include "stdafx.h"

#include "concrete_product_a1.h"
#include "concrete_product_b1.h"
#include "concrete_factory_1.h"


CConcreteProductFactory1::CConcreteProductFactory1()
{

}


CConcreteProductFactory1::~CConcreteProductFactory1()
{

}


CAbstractProductA* CConcreteProductFactory1::CreateProductA()
{
    return new CConcreteProductA1();
}


CAbstractProductB* CConcreteProductFactory1::CreateProductB()
{
    return new CConcreteProductB1();
}

