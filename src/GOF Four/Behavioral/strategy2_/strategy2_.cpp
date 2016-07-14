// strategy_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "context.h"

#include "strategy_a.h"
#include "strategy_b.h"

//  使用模板情况下，可以不用策略类基类，不过也意味着抛出了很多细节给外部
int _tmain(int argc, _TCHAR* argv[])
{
    CContext<CStrategyA> contextA;
    contextA.DoSomeThing();

    CContext<CStrategyB> contextB;
    contextB.DoSomeThing();

	return 0;
}

