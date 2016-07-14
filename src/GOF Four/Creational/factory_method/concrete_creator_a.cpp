#include "stdafx.h"
#include "concrete_creator_a.h"

#include "concrete_product_a1.h"
#include "concrete_product_a2.h"

CConcreteCreatorA::CConcreteCreatorA()
{

}


CConcreteCreatorA::~CConcreteCreatorA()
{

}


CProduct * CConcreteCreatorA::CreateProduct( ProductType productType )
{
    CProduct *pProduct = nullptr;
    switch ( productType )
    {
    case PT_PRODUCT_1:
        pProduct = new CConcreteProductA1();
        break;
    case PT_PRODUCT_2:
        pProduct = new CConcreteProductA2();
        break;
    default:
        //  也可以交回给父类，延迟至父类创建产品,并返回父类可构建的产品方式
        pProduct = CCreator::CreateProduct( productType );
        break;
    }
    return pProduct;
}

