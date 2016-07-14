#include "stdafx.h"

#include <iostream>
#include "ext_base_handler.h"


CExtBaseHandler::CExtBaseHandler(CBaseHandler *psuccessor, int handle_request_type) :CBaseHandler( psuccessor, handle_request_type )
{

}


CExtBaseHandler::~CExtBaseHandler()
{

}


void CExtBaseHandler::HandleRequest( CRequest *prequest )
{
    //  某些请求处理，如默认处理，额外的处理请求等，可以在此处添加
    if (prequest != nullptr)
    {
        if ( prequest->GetRequestCode() & HRT_EXTEND )
        {
            //  默认处理的
            std::cout << "CExtBaseHandler::HandleRequest() is invoked!" << std::endl; 
        }
        else
        {
            //  若都不处理，则再转交给父类处理
            CBaseHandler::HandleRequest( prequest );
        }
    }
}