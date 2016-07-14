#include "stdafx.h"

#include <iostream>
#include "reader_handler.h"


CReaderHandler::CReaderHandler(CBaseHandler *psuccessor, int handle_request_type) :CBaseHandler( psuccessor, handle_request_type )
{

}


CReaderHandler::~CReaderHandler()
{

}


void CReaderHandler::HandleRequest( CRequest *prequest )
{
    if (prequest != nullptr)
    {
        int request_code = prequest->GetRequestCode();

        //  �ж��Ƿ��б���������Ȥ������
        if ( request_code & handle_request_type_ )
        {
            if ( request_code & HRT_READ )
            {
                DoSomethingRead( prequest->GetParams() );
            }
        }
        else
        {
            if ( psuccessor_ != nullptr )
            {
                psuccessor_->HandleRequest( prequest );
            }
            else
            {
                CBaseHandler::HandleRequest( prequest );
            }
        }
    }
}


void CReaderHandler::DoSomethingRead( void *params )
{
    std::cout << "CReaderHandler::DoSomethingRead(";
    if ( params != nullptr)
    {
        if ( params != nullptr )
        {
            std::cout << *( (int*)params);
        }
    }
    std::cout << ")" << std::endl;
}