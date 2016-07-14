// adapter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "target.h"
#include "adapter_by_class.h"
#include "adapter_by_object.h"


void ClientToUseTarget( CTarget * ptarget)
{
    if ( ptarget != nullptr)
    {
        ptarget->DoSomething();
        ptarget->DoSomethingOthers();
    }
}


//  ������ģʽ�������������Ѵ��ڵĽӿ�
int _tmain(int argc, _TCHAR* argv[])
{
    CAdapterByClass *padapter_by_class = new CAdapterByClass();
    ClientToUseTarget( padapter_by_class );
    delete padapter_by_class;

    CAdaptee *padaptee = new CAdaptee();
    CAdapterByObject *padapter_by_object = new CAdapterByObject( padaptee );
    ClientToUseTarget( padapter_by_object );
    delete padaptee;
    delete padapter_by_object;

	return 0;
}

