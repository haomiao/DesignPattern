#include "stdafx.h"

#include <iostream>
#include "concrete_decorator1.h"


CConcreteDecorator1::CConcreteDecorator1( CComponent *pcomponent ) :
CDecorator(pcomponent)
{

}


CConcreteDecorator1::~CConcreteDecorator1()
{

}


void CConcreteDecorator1::DoSomething()
{
    DoSomethingOthersPre();
    CDecorator::DoSomething();
    DoSomethingOthersLast();
}


void CConcreteDecorator1::DoSomethingOthersPre()
{
    std::cout << "CConcreteDecorator1::DoSomethingOthersPre()" << std::endl;
}


void CConcreteDecorator1::DoSomethingOthersLast()
{
    std::cout << "CConcreteDecorator1::DoSomethingOthersLast()" << std::endl;
}
