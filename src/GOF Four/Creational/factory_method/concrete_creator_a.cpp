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
        //  Ҳ���Խ��ظ����࣬�ӳ������ഴ����Ʒ,�����ظ���ɹ����Ĳ�Ʒ��ʽ
        pProduct = CCreator::CreateProduct( productType );
        break;
    }
    return pProduct;
}

