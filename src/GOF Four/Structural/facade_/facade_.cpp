// facade_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "concrete_facade_a.h"
#include "concrete_facade_b.h"


void ClientToUseFacade( CBaseFacade *pfacade)
{
    if (pfacade != nullptr)
    {
        pfacade->DoOneThing();
        pfacade->DoSomeThing();
        pfacade->DoOtherThing();
    }
}


int _tmain(int argc, _TCHAR* argv[])
{
    CConcreteFacadeA *pfacade_a = new CConcreteFacadeA();
    ClientToUseFacade( pfacade_a );
    delete pfacade_a;

    std::cout << std::endl;

    CConcreteFacadeB *pfacade_b = new CConcreteFacadeB();
    ClientToUseFacade( pfacade_b );
    delete pfacade_b;

	return 0;
}

