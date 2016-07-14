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
    //  ��ʵ�ϣ��ù��Ӳ��������ڻ��಻��ʵ�־���Ĳ���,��ֻ��һ����ʵ�ֶ���
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