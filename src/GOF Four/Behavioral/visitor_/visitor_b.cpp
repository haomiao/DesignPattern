#include "stdafx.h"
#include "visitor_b.h"


CVisitorB::CVisitorB()
{

}


CVisitorB::~CVisitorB()
{

}



void CVisitorB::OnVisitorElement1( CElement1 *pelement )
{
    if ( pelement != nullptr)
    {
        pelement->DoSomething2();
    }
}


void CVisitorB::OnVisitorElement2( CElement2 *pelement )
{
    if ( pelement != nullptr )
    {
        pelement->DoSomething2();
    }
}


void CVisitorB::OnVisitorElementOther( CElementOther *pelement )
{

}