// builder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "director.h"
#include "concrete_builder_1.h"
#include "concrete_builder_2.h"
#include "concrete_builder_3.h"

void PrintProductInfo( Product & product)
{
    std::cout << "Product Name: " << product.product_name_ << std::endl;
    std::cout << "Product ID: " << product.product_id_ << std::endl;
    std::cout << "Product Serial Number: " << product.product_serial_num_ << std::endl;
    std::cout << std::endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
    CBuilderBase *pBuilder = new CConcreteBuilder1();
    CDirector *pDirector = new CDirector( pBuilder );
    pDirector->Construct();
    PrintProductInfo(pBuilder->GetProduct() );
    delete pBuilder;

    pBuilder = new CConcreteBuilder2();
    pDirector->SetBuilder( pBuilder );
    pDirector->Construct();
    PrintProductInfo( pBuilder->GetProduct() );
    delete pBuilder;

    pBuilder = new CConcreteBuilder3();
    pDirector->SetBuilder( pBuilder );
    pDirector->Construct();
    PrintProductInfo( pBuilder->GetProduct() );
    delete pBuilder;

    delete pDirector;

	return 0;
}

