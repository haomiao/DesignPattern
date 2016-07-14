#include "stdafx.h"

#include "builder_base.h"
#include "director.h"

CDirector::CDirector( CBuilderBase * pBuilder ) :
pBuilder_( pBuilder )
{

}


CDirector::~CDirector()
{

}


void CDirector::SetBuilder( CBuilderBase * pBuilder )
{
    pBuilder_ = pBuilder;
}


void CDirector::Construct()
{
    if (pBuilder_ != nullptr)
    {
        pBuilder_->BuildPart();
    }
}

