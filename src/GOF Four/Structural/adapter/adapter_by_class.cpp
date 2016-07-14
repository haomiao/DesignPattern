#include "stdafx.h"

#include <iostream>
#include "adapter_by_class.h"


CAdapterByClass::CAdapterByClass()
{

}


CAdapterByClass::~CAdapterByClass()
{

}


void CAdapterByClass::DoSomethingOthers()
{
    //CAdaptee::DoSomethingAdaptee();
    DoSomethingAdaptee();
}