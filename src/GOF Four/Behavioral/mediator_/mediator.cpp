#include "stdafx.h"
#include "mediator.h"


CMediator::CMediator()
{

}


CMediator::~CMediator()
{
    colleague_list_.clear();
}


void CMediator::NotifyAction( CBaseColleague *pcolleague, int exchange_info, std::string notify_str )
{
    //  本来可以单独处理，可以根据某些策略，处理各种消息事件,分派给相应的同事
    //  但本处，暂使用通告所有的同事,若同事感兴趣，则处理，否则不处理
    std::list<CBaseColleague *>::iterator it = colleague_list_.begin();
    std::list<CBaseColleague *>::iterator end = colleague_list_.end();
    for ( ; it != end; ++it )
    {
        if ( pcolleague != (*it) && ( ( *it )->GetExchangeInfo() & exchange_info ) )
        {
            (*it)->SetOutPutStr( notify_str );
        }
    }
}


void CMediator::PushColleague( CBaseColleague *pcolleague )
{
    colleague_list_.push_back( pcolleague );
}