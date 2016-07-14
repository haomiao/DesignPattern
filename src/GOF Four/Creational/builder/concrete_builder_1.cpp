#include "stdafx.h"
#include "concrete_builder_1.h"


CConcreteBuilder1::CConcreteBuilder1()
{

}


CConcreteBuilder1::~CConcreteBuilder1()
{

}


void CConcreteBuilder1::BuildPart()
{
    //BuildPartName();    //  ²»¹¹½¨Name
    BuildPartName();
    BuildPartId();
}


Product & CConcreteBuilder1::GetProduct()
{
    return product_;
}


void CConcreteBuilder1::BuildPartName()
{
    product_.product_name_ = "CConcreteBuilder1";
}


void CConcreteBuilder1::BuildPartId()
{
    product_.product_id_ = 1;
}


void CConcreteBuilder1::BuildPartSerialNum()
{
    product_.product_serial_num_ = 1001;
}