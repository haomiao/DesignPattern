#include "stdafx.h"

#include <iostream>
#include "base_template_method.h"


CBaseTemplateMethod::CBaseTemplateMethod()
{

}


CBaseTemplateMethod::~CBaseTemplateMethod()
{

}


void CBaseTemplateMethod::DoSomething()
{
    DoSomethingOperator1();
    DoSomethingOriginal();
    DoSomethingOperator2();
    DoSomethingSelf();
    DoSomethingOperator3();
}


void CBaseTemplateMethod::DoSomethingOperator3()
{
    //  事实上，该钩子操作可能在基类不会实现具体的操作,而只是一个空实现而已
    std::cout << "CBaseTemplateMethod::DoSomethingOperator3()" << std::endl;
}


void CBaseTemplateMethod::DoSomethingOriginal()
{
    std::cout << "CBaseTemplateMethod::DoSomethingOriginal()" << std::endl;
}


void CBaseTemplateMethod::DoSomethingSelf()
{
    std::cout << "CBaseTemplateMethod::DoSomethingSelf()" << std::endl;
}