// proxy_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "real_subject.h"
#include "proxy_subject.h"


void ClientToUseSubject(CSubject * psubject)
{
    if (psubject != nullptr)
    {
        psubject->DoSomething();
        psubject->DoOtherthing();
    }
}


int _tmain(int argc, _TCHAR* argv[])
{
    CRealSubject *preal_subject = new CRealSubject();
    CProxySubject *pproxy_subject = new CProxySubject( preal_subject );

    //  使用真实的目标对象
    ClientToUseSubject( preal_subject );

    std::cout << std::endl;

    //  使用代理对象
    ClientToUseSubject( pproxy_subject );

    delete preal_subject;
    delete pproxy_subject;

	return 0;
}

