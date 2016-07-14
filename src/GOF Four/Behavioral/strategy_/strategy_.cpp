// strategy_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "context.h"
#include "concrete_a.h"
#include "concrete_b.h"
#include "concrete_default.h"

void ClientToUseContext( CContext *pcontext)
{
    if (pcontext != nullptr)
    {
        pcontext->DoSomeThing();
    }
}


int _tmain(int argc, _TCHAR* argv[])
{
    CContext context;

    CConcreteStrategyA *pconcreteA = new CConcreteStrategyA();
    ClientToUseContext( &context );
    context.SetStrategyObj( pconcreteA );
    ClientToUseContext( &context );

    CConcreteStrategyB *pconcreteB = new CConcreteStrategyB();
    context.SetStrategyObj( pconcreteB );
    ClientToUseContext( &context );

    CConcreteDefault *pconcrete_default = new CConcreteDefault();
    context.SetStrategyObj( pconcrete_default );
    ClientToUseContext( &context );

    context.SetStrategyObj( nullptr );
    ClientToUseContext( &context );

    delete pconcreteA;
    delete pconcreteB;
    delete pconcrete_default;

	return 0;
}

