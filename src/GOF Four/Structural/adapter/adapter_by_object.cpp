#include "stdafx.h"

#include <iostream>
#include "adapter_by_object.h"


CAdapterByObject::CAdapterByObject( CAdaptee * padaptee ):
padaptee_( padaptee )
{

}


CAdapterByObject::~CAdapterByObject()
{

}


void CAdapterByObject::DoSomethingOthers()
{
    if (padaptee_ != nullptr)
    {
        padaptee_->DoSomethingAdaptee();
    }
}