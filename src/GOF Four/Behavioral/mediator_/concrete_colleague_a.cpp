#include "stdafx.h"

#include <iostream>
#include "concrete_colleague_a.h"
#include "base_mediator.h"


CConcreteColleagueA::CConcreteColleagueA( CBaseMediator *pmediator, int exchange_info ) :
CBaseColleague(pmediator, exchange_info)
{

}


CConcreteColleagueA::~CConcreteColleagueA()
{

}


void CConcreteColleagueA::SleepingNotify()
{
    pmediator_->NotifyAction( this, EIF_SLEEP, "I'm CConcreteColleagueA, and I'm sleeping!" );
}


void CConcreteColleagueA::WorkingNotify()
{
    pmediator_->NotifyAction( this, EIF_WORK, "I'm CConcreteColleagueA, and I'm working!" );
}


void CConcreteColleagueA::SetOutPutStr( std::string output_str )
{
    std::cout << "CConcreteColleagueA receives: " << output_str << std::endl;
}