// simple_factory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "abstract_product.h"
#include "product_factory.h"

int _tmain(int argc, _TCHAR* argv[])
{
    CProductFactory productFactory;

    CAbstractProduct *pProduct = productFactory.CreateProductA();
    pProduct->DoSomething();
    delete pProduct;

    pProduct = productFactory.CreateProductB();
    pProduct->DoSomething();
    delete pProduct;

    pProduct = productFactory.CreateProduct( PC_PRODUCT_A );
    pProduct->DoSomething();
    delete pProduct;

    pProduct = productFactory.CreateProduct( PC_PRODUCT_B );
    pProduct->DoSomething();
    delete pProduct;

	return 0;
}

