#include "stdafx.h"

#include <iostream>
#include "element2.h"
#include "base_visitor.h"

CElement2::CElement2()
{

}


CElement2::~CElement2()
{

}


void CElement2::AcceptVisitor( CBaseVisitor *pvisitor )
{
    if (pvisitor != nullptr)
    {
        pvisitor->OnVisitorElement2( this );
    }
}


void CElement2::DoSomething1()
{
    std::cout << "CElement2::DoSomething1()" << std::endl;
}


void CElement2::DoSomething2()
{
    std::cout << "CElement2::DoSomething2()" << std::endl;
}
