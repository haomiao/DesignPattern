#include "stdafx.h"

#include <iostream>
#include "element1.h"
#include "base_visitor.h"

CElement1::CElement1()
{

}


CElement1::~CElement1()
{

}


void CElement1::AcceptVisitor( CBaseVisitor *pvisitor )
{
    if (pvisitor != nullptr)
    {
        pvisitor->OnVisitorElement1( this );
    }
}


void CElement1::DoSomething1()
{
    std::cout << "CElement1::DoSomething1()" << std::endl;
}


void CElement1::DoSomething2()
{
    std::cout << "CElement1::DoSomething2()" << std::endl;
}