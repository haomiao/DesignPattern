#include "stdafx.h"

#include <iostream>
#include "concrete_component.h"


CConcreteComponent::CConcreteComponent()
{

}


CConcreteComponent::~CConcreteComponent()
{

}


void CConcreteComponent::DoSomething()
{
    std::cout << "CConcreteComponent::DoSomething()" << std::endl;
}

