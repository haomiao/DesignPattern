#include "stdafx.h"
#include "decorator.h"


CDecorator::CDecorator( CComponent *pcomponent ):
pcomponent_( pcomponent )
{

}


CDecorator::~CDecorator()
{

}


void CDecorator::DoSomething()
{
    if (pcomponent_ != nullptr)
    {
        pcomponent_->DoSomething();
    }
}