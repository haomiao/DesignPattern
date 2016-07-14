#include "stdafx.h"

#include "base_colleague.h"


CBaseColleague::CBaseColleague( CBaseMediator *pmediator, int exchange_info ) :
pmediator_(pmediator),
exchange_info_( exchange_info )
{

}


CBaseColleague::~CBaseColleague()
{

}


int CBaseColleague::GetExchangeInfo()
{
    return exchange_info_;
}