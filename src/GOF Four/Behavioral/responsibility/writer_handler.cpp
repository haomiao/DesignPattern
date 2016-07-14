#include "stdafx.h"

#include <iostream>
#include "writer_handler.h"


CWriterHandler::CWriterHandler( CBaseHandler *psuccessor, int handle_request_type ) :CBaseHandler( psuccessor, handle_request_type )
{

}


CWriterHandler::~CWriterHandler()
{

}


void CWriterHandler::HandleRequest( CRequest *prequest )
{
    if (prequest != nullptr)
    {
        int request_code = prequest->GetRequestCode();

        //  �ж��Ƿ��б���������Ȥ������
        if ( request_code & handle_request_type_ )
        {
            if ( request_code & HRT_WRITE )
            {
                DoSomethingWrite( prequest->GetParams() );
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


void CWriterHandler::DoSomethingWrite( void *params )
{
    std::cout << "CWriterHandler::DoSomethingWrite(";
    if ( params != nullptr )
    {
        if ( params != nullptr )
        {
            std::cout << (const char*)params;
        }
    }
    std::cout << ")" << std::endl;
}