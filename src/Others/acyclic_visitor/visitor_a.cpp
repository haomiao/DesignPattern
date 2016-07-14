#include "stdafx.h"
#include "visitor_a.h"

#include "element1.h"

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
