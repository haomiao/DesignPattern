#include "stdafx.h"

#include <iostream>
#include "concrete_colleague_monitor.h"
#include "base_mediator.h"


CConcreteColleagueMonitor::CConcreteColleagueMonitor( CBaseMediator *pmediator, int exchange_info ) :
CBaseColleague(pmediator, exchange_info)
{

}


CConcreteColleagueMonitor::~CConcreteColleagueMonitor()
{

}


void CConcreteColleagueMonitor::SetOutPutStr( std::string output_str )
{
    std::cout << "CConcreteColleagueMonitor receives: " << output_str << std::endl;
}


void CConcreteColleagueMonitor::NotifyAll( std::string notify_str )
{
    pmediator_->NotifyAction( this, EIF_SLEEP | EIF_WORK | EIF_DRINK, notify_str );
}