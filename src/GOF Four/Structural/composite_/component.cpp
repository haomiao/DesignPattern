#include "stdafx.h"

#include <iostream>
#include "component.h"


CComponent::CComponent()
{

}


CComponent::~CComponent()
{
    std::cout << "~CComponent()" << std::endl;
}


void CComponent::AddComponent( CComponent * pcomponent )
{

}


bool CComponent::RemoveComponent( CComponent * pcomponent )
{
    return false;
}


CComponent * CComponent::GetChildComponent( unsigned int index )
{
    return nullptr;
}


unsigned int CComponent::GetChildSize()
{
    return 0;
}


void CComponent::DoSomething()
{

}

