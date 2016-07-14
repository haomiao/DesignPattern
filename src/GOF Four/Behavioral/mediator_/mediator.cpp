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
    //  �������Ե����������Ը���ĳЩ���ԣ����������Ϣ�¼�,���ɸ���Ӧ��ͬ��
    //  ����������ʹ��ͨ�����е�ͬ��,��ͬ�¸���Ȥ���������򲻴���
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