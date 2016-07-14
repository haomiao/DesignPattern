// abstract_factory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "concrete_factory_1.h"
#include "concrete_factory_2.h"

#include "product_abstract_factory.h"
#include "product_factory.h"

#include "abstract_product_a.h"
#include "abstract_product_b.h"

int _tmain(int argc, _TCHAR* argv[])
{

    CProductAbstractFactory *pProductFactory = new CConcreteProductFactory1();
    CAbstractProductA *pProductA = pProductFactory->CreateProductA();
    CAbstractProductB *pProductB = pProductFactory->CreateProductB();
    pProductA->DoSomething();
    pProductB->DoSomething();
    delete pProductFactory;
    delete pProductA;
    delete pProductB;

    pProductFactory = new CConcreteProductFactory2();
    pProductA = pProductFactory->CreateProductA();
    pProductB = pProductFactory->CreateProductB();
    pProductA->DoSomething();
    pProductB->DoSomething();
    delete pProductFactory;
    delete pProductA;
    delete pProductB;

    CProductFactory productFactory;
    pProductFactory = productFactory.CreateProductFactory1();
    pProductA = pProductFactory->CreateProductA();
    pProductB = pProductFactory->CreateProductB();
    pProductA->DoSomething();
    pProductB->DoSomething();
    delete pProductFactory;
    delete pProductA;
    delete pProductB;

    pProductFactory = productFactory.CreateProductFactory2();
    pProductA = pProductFactory->CreateProductA();
    pProductB = pProductFactory->CreateProductB();
    pProductA->DoSomething();
    pProductB->DoSomething();
    delete pProductFactory;
    delete pProductA;
    delete pProductB;

    pProductFactory = productFactory.CreateProductFactory( PC_PRODUCT_FACTORY_1 );
    pProductA = pProductFactory->CreateProductA();
    pProductB = pProductFactory->CreateProductB();
    pProductA->DoSomething();
    pProductB->DoSomething();
    delete pProductFactory;
    delete pProductA;
    delete pProductB;

    pProductFactory = productFactory.CreateProductFactory( PC_PRODUCT_FACTORY_2 );
    pProductA = pProductFactory->CreateProductA();
    pProductB = pProductFactory->CreateProductB();
    pProductA->DoSomething();
    pProductB->DoSomething();
    delete pProductFactory;
    delete pProductA;
    delete pProductB;

	return 0;
}

