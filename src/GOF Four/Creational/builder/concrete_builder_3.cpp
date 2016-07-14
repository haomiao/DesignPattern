#include "stdafx.h"
#include "concrete_builder_3.h"


CConcreteBuilder3::CConcreteBuilder3()
{

}


CConcreteBuilder3::~CConcreteBuilder3()
{

}


void CConcreteBuilder3::BuildPart()
{
    BuildPartName();
    //BuildPartId();    //  ²»¹¹½¨ID
    BuildPartSerialNum();
}


Product & CConcreteBuilder3::GetProduct()
{
    return product_;
}


void CConcreteBuilder3::BuildPartName()
{
    product_.product_name_ = "CConcreteBuilder3";
}


void CConcreteBuilder3::BuildPartId()
{
    product_.product_id_ = 3;
}


void CConcreteBuilder3::BuildPartSerialNum()
{
    product_.product_serial_num_ = 1003;
}