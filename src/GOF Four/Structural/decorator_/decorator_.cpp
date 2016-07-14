// decorator_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include "concrete_component.h"
#include "concrete_decorator1.h"
#include "concrete_decorator2.h"


void ClientToUseComponent( CComponent *pcomponent)
{
    if (pcomponent != nullptr)
    {
        pcomponent->DoSomething();
    }
}


int _tmain(int argc, _TCHAR* argv[])
{
    //  ĳ���͵�ĳ��ԭʼ���,��ȻҲ���������������
    CConcreteComponent *pcomponent = new CConcreteComponent();
    ClientToUseComponent( pcomponent );
    
    std::cout << std::endl;

    //  ���װ�κ�����
    CConcreteDecorator1 *pdecorator1 = new CConcreteDecorator1( pcomponent );
    ClientToUseComponent( pdecorator1 );

    std::cout << std::endl;

    //  �ٶ����װ�κ�����������װ��
    CConcreteDecorator2 *pdecorator2 = new CConcreteDecorator2( pdecorator1 );
    ClientToUseComponent( pdecorator2 );

    //  �������ϣ������������װ��
    //  �����µ�װ�����ڲ�Ҳ����������ĵĸ���ְ��
    delete pcomponent;
    delete pdecorator1;
    delete pdecorator2;

	return 0;
}

