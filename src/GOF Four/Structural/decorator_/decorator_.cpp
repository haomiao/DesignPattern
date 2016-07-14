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
    //  某类型的某个原始组件,当然也可以是其他的组件
    CConcreteComponent *pcomponent = new CConcreteComponent();
    ClientToUseComponent( pcomponent );
    
    std::cout << std::endl;

    //  添加装饰后的组件
    CConcreteDecorator1 *pdecorator1 = new CConcreteDecorator1( pcomponent );
    ClientToUseComponent( pdecorator1 );

    std::cout << std::endl;

    //  再对添加装饰后的组件再增加装饰
    CConcreteDecorator2 *pdecorator2 = new CConcreteDecorator2( pdecorator1 );
    ClientToUseComponent( pdecorator2 );

    //  按照以上，可以无限添加装饰
    //  此外新的装饰类内部也可添加其他的的更多职责
    delete pcomponent;
    delete pdecorator1;
    delete pdecorator2;

	return 0;
}

