#include "stdafx.h"

#include <iostream>
#include "base_handler.h"


CBaseHandler::CBaseHandler( CBaseHandler *psuccessor, int handle_request_type ):
psuccessor_(psuccessor),
handle_request_type_(handle_request_type)
{

}


CBaseHandler::~CBaseHandler()
{

}


void CBaseHandler::HandleRequest( CRequest *prequest )
{
    DoDefaultThing();
}


void CBaseHandler::SetRequestHandler( CBaseHandler *psuccessor, int handle_request_type )
{
    psuccessor_ = psuccessor;
    handle_request_type_ = handle_request_type;
}


void CBaseHandler::DoDefaultThing()
{
    std::cout << "CBaseHandler::HandleRequest() is defaultly invoked!" << std::endl;
}