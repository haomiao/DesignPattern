#include "stdafx.h"

#include <iostream>
#include "concrete_decorator2.h"


CConcreteDecorator2::CConcreteDecorator2( CComponent *pcomponent ) :
CDecorator(pcomponent)
{

}


CConcreteDecorator2::~CConcreteDecorator2()
{

}


void CConcreteDecorator2::DoSomething()
{
    DoOthersPre();
    CDecorator::DoSomething();
    DoOthersLast();
}


void CConcreteDecorator2::DoOthersPre()
{
    std::cout << "CConcreteDecorator2::DoOthersPre()" << std::endl;
}


void CConcreteDecorator2::DoOthersLast()
{
    std::cout << "CConcreteDecorator2::DoOthersLast()" << std::endl;
}
