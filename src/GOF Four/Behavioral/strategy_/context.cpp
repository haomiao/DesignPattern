#include "stdafx.h"

#include <iostream>
#include "context.h"


CContext::CContext():
pstrategy_(nullptr) // 也可以用默认的CConcreteDefault初始化，则若未调用SetStrategyObj时，可用默认实现策略即可；此外默认策略可直接在CContext类中直接实现
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
