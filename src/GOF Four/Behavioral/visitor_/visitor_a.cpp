#include "stdafx.h"
#include "visitor_a.h"


CVisitorA::CVisitorA()
{

}


CVisitorA::~CVisitorA()
{

}



void CVisitorA::OnVisitorElement1( CElement1 *pelement )
{
    if ( pelement != nullptr)
    {
        pelement->DoSomething1();
    }
}


void CVisitorA::OnVisitorElement2( CElement2 *pelement )
{
    if ( pelement != nullptr )
    {
        pelement->DoSomething1();
    }
}


void CVisitorA::OnVisitorElementOther( CElementOther *pelement )
{

}