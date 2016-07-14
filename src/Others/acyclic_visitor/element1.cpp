#include "stdafx.h"

#include <iostream>
#include "element1.h"
#include "base_visitor.h"
#include "visitor_a.h"

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
        CVisitorA * pvisitorA = dynamic_cast<CVisitorA *>( pvisitor );
        if ( pvisitorA != nullptr)
        {
            pvisitorA->OnVisitorElement1( this );
        }
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