#include "stdafx.h"
#include "concrete_prototype_b.h"
#include <iostream>
#include <string>

CConcretePrototypeB::CConcretePrototypeB() :
pPrototypeStr_( nullptr ),
prototypeId_( 0 )
{

}


CConcretePrototypeB::~CConcretePrototypeB()
{
    if (pPrototypeStr_ != nullptr)
    {
        delete pPrototypeStr_;
        pPrototypeStr_ = nullptr;
    }
}


CPrototypeBase * CConcretePrototypeB::Clone()
{
    //  这次通过复制构造实现
    return new CConcretePrototypeB(*this);
}


void CConcretePrototypeB::Initializetion( void *pParam1, void *pParam2 )
{
    if ( pParam1 != nullptr)
    {
        char * pDataStr = (char *)pParam1;
        if ( pPrototypeStr_ == nullptr )
        {
            pPrototypeStr_ = new char[128];
        }

        memset( pPrototypeStr_, 0, 128 );
        memcpy_s( pPrototypeStr_, 128, pDataStr, strlen( pDataStr ) );
    }
    
    if (pParam2 != nullptr)
    {
        prototypeId_ = *( (int *)pParam2 );
    }
}


void CConcretePrototypeB::DoSomething()
{
    std::cout << "CConcretePrototypeB: ";
    if ( pPrototypeStr_ != nullptr)
    {
        std::cout << pPrototypeStr_ << " ";
    }
    std::cout << prototypeId_ << std::endl;
}


CConcretePrototypeB::CConcretePrototypeB( const CConcretePrototypeB & that )
{
    if ( that.pPrototypeStr_ != nullptr)
    {
        if ( pPrototypeStr_ == nullptr )
        {
            pPrototypeStr_ = new char[128];
        }
        memset( pPrototypeStr_, 0, 128 );
        memcpy_s( pPrototypeStr_, 128, that.pPrototypeStr_, 128 );
    }
    
    prototypeId_ = that.prototypeId_;
}