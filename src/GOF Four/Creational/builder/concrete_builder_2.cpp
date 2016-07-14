#include "stdafx.h"
#include "concrete_builder_2.h"


CConcreteBuilder2::CConcreteBuilder2()
{

}


CConcreteBuilder2::~CConcreteBuilder2()
{

}


void CConcreteBuilder2::BuildPart()
{
    //  ¾ù¹¹½¨
    BuildPartName();
    BuildPartId();
    BuildPartSerialNum();
}


Product & CConcreteBuilder2::GetProduct()
{
    return product_;
}


void CConcreteBuilder2::BuildPartName()
{
    product_.product_name_ = "CConcreteBuilder2";
}


void CConcreteBuilder2::BuildPartId()
{
    product_.product_id_ = 2;
}


void CConcreteBuilder2::BuildPartSerialNum()
{
    product_.product_serial_num_ = 1002;
}