#include "stdafx.h"
#include "concrete_prototype_a.h"
#include <iostream>
#include <string>

CConcretePrototypeA::CConcretePrototypeA() :
prototypeId_( 0 )
{
    memset( pPrototypeStr_, 0, 128 );
}


CConcretePrototypeA::~CConcretePrototypeA()
{

}


CPrototypeBase * CConcretePrototypeA::Clone()
{
    CConcretePrototypeA * pConcretePrototype = new CConcretePrototypeA();
    strcpy_s( pConcretePrototype->pPrototypeStr_, pPrototypeStr_ );
    pConcretePrototype->prototypeId_ = prototypeId_;
    return pConcretePrototype;
}


void CConcretePrototypeA::Initializetion( void *pParam1, void *pParam2 )
{
    if ( pParam1 != nullptr )
    {
        char * pDataStr = (char *)pParam1;
        strcpy_s( pPrototypeStr_, pDataStr );
    }

    if ( pParam2 != nullptr )
    {
        prototypeId_ = *( (int *)pParam2 );
    }
}


void CConcretePrototypeA::DoSomething()
{
    std::cout << "CConcretePrototypeA: " << pPrototypeStr_
        << " " << prototypeId_ << std::endl;
}