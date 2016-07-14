// prototype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "prototype_base.h"
#include "prototype_manager.h"

int _tmain(int argc, _TCHAR* argv[])
{
    CPrototypeManager prototypeManager;
    CPrototypeBase *pPrototype = prototypeManager.GetPrototype( PTT_PROTOTYPE_A );
    char prototypeStrA[] = "prototypeStrA";
    int prototypeID = 100;
    pPrototype->Initializetion( prototypeStrA, &prototypeID );
    pPrototype->DoSomething();
    delete pPrototype;

    pPrototype = prototypeManager.GetPrototype( PTT_PROTOTYPE_B );
    char prototypeStrB[] = "prototypeStrB";
    prototypeID = 101;
    pPrototype->Initializetion( prototypeStrB, &prototypeID );
    pPrototype->DoSomething();
    delete pPrototype;

    pPrototype = prototypeManager.GetPrototype( PTT_PROTOTYPE_B );
    prototypeID = 102;
    pPrototype->Initializetion( nullptr, &prototypeID );
    pPrototype->DoSomething();
    delete pPrototype;

	return 0;
}

