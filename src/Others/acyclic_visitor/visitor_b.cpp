#include "stdafx.h"
#include "visitor_b.h"
#include "element2.h"


CVisitorB::CVisitorB()
{

}


CVisitorB::~CVisitorB()
{

}


void CVisitorB::OnVisitorElement2( CElement2 *pelement )
{
    if ( pelement != nullptr )
    {
        pelement->DoSomething2();
    }
}

