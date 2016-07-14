#include "stdafx.h"

#include <iostream>
#include "context.h"


CContext::CContext():
pstrategy_(nullptr)
{

}


CContext::~CContext()
{

}


void CContext::SetStrategyObj( CBaseStrategy   *pstrategy )
{
    pstrategy_ = pstrategy;
}



void CContext::DoSomeThing()
{
    if (pstrategy_ != nullptr)
    {
        pstrategy_->DoSomeAlgorithm();
    }
    else
    {
        std::cout << "no strategy choosed!" << std::endl;
    }
}