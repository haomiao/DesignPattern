#include "stdafx.h"

#include <iostream>
#include "target.h"


CTarget::CTarget()
{

}


CTarget::~CTarget()
{

}


void CTarget::DoSomething()
{
    std::cout << "CTarget::DoSomething()" << std::endl;
}


void CTarget::DoSomethingOthers()
{
    std::cout << "CTarget::DoSomethingOthers()" << std::endl;
}