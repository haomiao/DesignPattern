// strategy_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "context.h"

#include "strategy_a.h"
#include "strategy_b.h"

//  ʹ��ģ������£����Բ��ò�������࣬����Ҳ��ζ���׳��˺ܶ�ϸ�ڸ��ⲿ
int _tmain(int argc, _TCHAR* argv[])
{
    CContext<CStrategyA> contextA;
    contextA.DoSomeThing();

    CContext<CStrategyB> contextB;
    contextB.DoSomeThing();

	return 0;
}

