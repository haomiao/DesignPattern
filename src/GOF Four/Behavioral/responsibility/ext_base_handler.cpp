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
    //  ĳЩ��������Ĭ�ϴ�������Ĵ�������ȣ������ڴ˴����
    if (prequest != nullptr)
    {
        if ( prequest->GetRequestCode() & HRT_EXTEND )
        {
            //  Ĭ�ϴ����
            std::cout << "CExtBaseHandler::HandleRequest() is invoked!" << std::endl; 
        }
        else
        {
            //  ��������������ת�������ദ��
            CBaseHandler::HandleRequest( prequest );
        }
    }
}