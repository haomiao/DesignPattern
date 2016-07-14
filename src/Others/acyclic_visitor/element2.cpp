#include "stdafx.h"

#include <iostream>
#include "element2.h"
#include "base_visitor.h"
#include "visitor_b.h"

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
        //  通过基类转型为子类，实现访问
        CVisitorB * pvisitorB = dynamic_cast<CVisitorB *>( pvisitor );
        if ( pvisitorB != nullptr)
        {    
            pvisitorB->OnVisitorElement2( this );
        }
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
