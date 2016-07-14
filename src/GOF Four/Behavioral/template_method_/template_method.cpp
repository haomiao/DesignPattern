#include "stdafx.h"
#include <iostream>
#include "template_method.h"


CTemplateMethod::CTemplateMethod()
{

}


CTemplateMethod::~CTemplateMethod()
{

}


void CTemplateMethod::DoSomethingOperator1()
{
    std::cout << "CTemplateMethod::DoSomethingOperator1()" << std::endl;
}


void CTemplateMethod::DoSomethingOperator2()
{
    std::cout << "CTemplateMethod::DoSomethingOperator2()" << std::endl;
}