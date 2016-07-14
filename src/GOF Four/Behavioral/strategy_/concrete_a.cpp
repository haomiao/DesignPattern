#include "stdafx.h"

#include <iostream>
#include "concrete_a.h"


CConcreteStrategyA::CConcreteStrategyA()
{

}


CConcreteStrategyA::~CConcreteStrategyA()
{

}


void CConcreteStrategyA::DoSomeAlgorithm()
{
    std::cout << "CConcreteStrategyA::DoSomeAlgorithm()" << std::endl;
}
