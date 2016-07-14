// singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "ref_singleton.h"

int _tmain(int argc, _TCHAR* argv[])
{

    CSingleton *psingleton = CSingleton::GetInstance();
    psingleton->DoSomething();
    psingleton->Destory();

    CStaticSingleton *pstatic_singleton = CStaticSingleton::GetInstance();
    pstatic_singleton->DoSomething();

    CRefSingleton *pref_singleton = CRefSingleton::GetInstance();
    pref_singleton->DoSomething();
    pref_singleton->ReleaseRef();
    pref_singleton = CRefSingleton::GetInstance();
    pref_singleton->DoSomething();
    pref_singleton->ReleaseRef();

    CGuardSingleton *pguard_singleton1 = CGuardSingleton::GetInstance();
    pguard_singleton1->DoSomething();
    CGuardSingleton *pguard_singleton2 = CGuardSingleton::GetInstance();
    pguard_singleton2->DoSomething();


    CSafeSingleton *psafe_singleton = CSafeSingleton::GetInstance();
    psafe_singleton->DoSomething();
	return 0;
}

