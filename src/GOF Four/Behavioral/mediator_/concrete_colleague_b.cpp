#include "stdafx.h"

#include <iostream>
#include "concrete_colleague_b.h"
#include "base_mediator.h"


CConcreteColleagueB::CConcreteColleagueB( CBaseMediator *pmediator, int exchange_info ) :
CBaseColleague(pmediator, exchange_info)
{

}


CConcreteColleagueB::~CConcreteColleagueB()
{

}


void CConcreteColleagueB::DrinkingNotify()
{
    pmediator_->NotifyAction( this, EIF_DRINK, "I'm CConcreteColleagueB, and I'm drinking!" );
}


void CConcreteColleagueB::SetOutPutStr( std::string output_str )
{
    std::cout << "CConcreteColleagueB receives: " << output_str << std::endl;
}