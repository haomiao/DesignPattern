// acyclic_visitor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "element1.h"
#include "element2.h"
#include "visitor_a.h"
#include "visitor_b.h"

int _tmain(int argc, _TCHAR* argv[])
{
    CElement1 *pelement1 = new CElement1();
    CVisitorA *pvisitora = new CVisitorA();
    pelement1->AcceptVisitor(pvisitora);

    CElement2 *pelement2 = new CElement2();
    CVisitorB *pvisitorb = new CVisitorB();
    pelement2->AcceptVisitor( pvisitorb );

    //pelement2->AcceptVisitor( pvisitora );

    delete pelement1;
    delete pvisitora;
    delete pelement2;
    delete pvisitorb;

	return 0;
}

