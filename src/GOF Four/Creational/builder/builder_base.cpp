#include "stdafx.h"
#include "builder_base.h"


CBuilderBase::CBuilderBase()
{
    memset( &product_, 0, sizeof( product_ ) );
}


CBuilderBase::~CBuilderBase()
{

}


void CBuilderBase::BuildPartName()
{

}


void CBuilderBase::BuildPartId()
{

}


void CBuilderBase::BuildPartSerialNum()
{

}


Product & CBuilderBase::GetProduct()
{
    return product_;
}