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
    //  ��ͨ��������������Ʒ
    //  Ҳ��ͨ��ģ�巽ʽ������Ʒ
    //  ������������Ʒ�����ظ����ϸ����Ϣ��
    //  ��ģ����Ϊ����ʵ�ֵ�����ϸ����Բ���������Ҫ��һ��
    //  ��Ȼ��������ʵ������һ��CConcreteCreatorB����Ϊ�����߶���
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

