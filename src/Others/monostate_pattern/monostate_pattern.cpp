// monostate_pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "monostate.h"

/** 单态模式 
    (相对单例模式关注的是结构，他关注的是行为上)
    (单例只能有一个实例)
    (单态可以有多个实例，但是所有实例状态一致,另外也可以继承，子类可重定义实现)
*/ 


int _tmain(int argc, _TCHAR* argv[])
{
    Monostate *monostate1 = new Monostate();
    Monostate *monostate2 = new Monostate();
    
    monostate1->SetNum(100);
    unsigned int num = monostate2->GetNum();
    cout << num <<endl;
    cout << endl;

    monostate2->SetNum(101);
    num = monostate1->GetNum();
    cout << num <<endl;
    cout << endl;

    delete monostate1;  //  无论删除与否，不影响状态

    monostate2->SetNum(111);
    num = monostate1->GetNum();
    cout << num <<endl;

    delete monostate2;

	return 0;   
}

