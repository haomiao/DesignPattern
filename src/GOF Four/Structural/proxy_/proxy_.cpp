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

    //  ʹ����ʵ��Ŀ�����
    ClientToUseSubject( preal_subject );

    std::cout << std::endl;

    //  ʹ�ô������
    ClientToUseSubject( pproxy_subject );

    delete preal_subject;
    delete pproxy_subject;

	return 0;
}

