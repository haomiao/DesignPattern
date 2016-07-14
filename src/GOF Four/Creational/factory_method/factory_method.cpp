// factory_method.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "product.h"
#include "creator.h"

#include "concrete_creator_a.h"
#include "concrete_creator_tmpl.h"

#include "concrete_product_b1.h"
#include "concrete_product_b2.h"
#include "concrete_product_a2.h"

int _tmain(int argc, _TCHAR* argv[])
{
    //  可通过参数化构建产品
    //  也可通过模板方式构建产品
    //  参数化构建产品可隐藏更多的细节信息，
    //  而模板会更为方便实现但隐藏细节相对参数化构建要差一点
    //  当然，还可以实现另外一个CConcreteCreatorB来作为创建者对象
    CConcreteCreatorA *pCreator = new CConcreteCreatorA();
    CProduct *pProduct = pCreator->CreateProduct( PT_PRODUCT_1 );
    pProduct->DoSomething();
    delete pProduct;

    pProduct = pCreator->CreateProduct( PT_PRODUCT_2 );
    pProduct->DoSomething();
    delete pProduct;
    delete pCreator;

    CConcreteCreatorTmpl<CConcreteProductB1> creatorTmplB1;
    pProduct = creatorTmplB1.CreateProduct();
    pProduct->DoSomething();
    delete pProduct;

    CConcreteCreatorTmpl<CConcreteProductB2> creatorTmplB2;
    pProduct = creatorTmplB2.CreateProduct();
    pProduct->DoSomething();
    delete pProduct;

    CConcreteCreatorTmpl<CConcreteProductA2> creatorTmplA2;
    pProduct = creatorTmplA2.CreateProduct();
    pProduct->DoSomething();
    delete pProduct;

	return 0;
}

