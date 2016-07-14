#include "stdafx.h"

#include <iostream>
#include "extend_handler.h"


CExtendHandler::CExtendHandler( CBaseHandler *psuccessor, int handle_request_type ) :CExtBaseHandler( psuccessor, handle_request_type )
{

}


CExtendHandler::~CExtendHandler()
{

}


void CExtendHandler::HandleRequest( CRequest *prequest )
{
    if (prequest != nullptr)
    {
        int request_code = prequest->GetRequestCode();

        //  判断是否有本类对象感兴趣的请求
        if ( request_code & handle_request_type_ )
        {
            if ( request_code & handle_request_type_ )
            {
                DoSomething( prequest->GetParams() );
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
                CExtBaseHandler::HandleRequest( prequest );
            }
        }
    }
}


void CExtendHandler::DoSomething( void *params )
{
    std::cout << "CExtendHandler::DoSomething(";
    if ( params != nullptr )
    {
        if ( params != nullptr )
        {
            std::cout << *( (int *)params);
        }
    }
    std::cout << ")" << std::endl;
}