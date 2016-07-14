#include "stdafx.h"

#include <iostream>
#include "reader_writer_handler.h"


CReaderWriterHandler::CReaderWriterHandler( CBaseHandler *psuccessor, int handle_request_type ) :CBaseHandler( psuccessor, handle_request_type )
{

}


CReaderWriterHandler::~CReaderWriterHandler()
{

}


void CReaderWriterHandler::HandleRequest( CRequest *prequest )
{
    if (prequest != nullptr)
    {
        int request_code = prequest->GetRequestCode();

        //  判断是否有本类对象感兴趣的请求
        if ( request_code & handle_request_type_ )
        {
            if ( request_code & HRT_READ )
            {
                DoSomethingRead( prequest->GetParams() );
            }

            if ( request_code & HRT_WRITE )
            {
                DoSomethingWrite( prequest->GetParams() );
            }

            if ( request_code & HRT_READ_WRITE )
            {
                DoSomethingReadWrite( prequest->GetParams() );
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


void CReaderWriterHandler::DoSomethingRead( void *params )
{
    std::cout << "CReaderWriterHandler::DoSomethingRead(";
    if ( params != nullptr )
    {
        if ( params != nullptr )
        {
            CombinStruct * pcombin_struct = (CombinStruct *)params;
            std::cout << pcombin_struct->data1_;
        }
    }
    std::cout << ")" << std::endl;
}


void CReaderWriterHandler::DoSomethingWrite( void *params )
{
    std::cout << "CReaderWriterHandler::DoSomethingWrite(";
    if ( params != nullptr )
    {
        if ( params != nullptr )
        {
            CombinStruct * pcombin_struct = (CombinStruct *)params;
            std::cout << pcombin_struct->data2_;
        }
    }
    std::cout << ")" << std::endl;
}


void CReaderWriterHandler::DoSomethingReadWrite( void *params )
{
    std::cout << "CReaderWriterHandler::DoSomethingReadWrite(";
    if ( params != nullptr )
    {
        if ( params != nullptr )
        {
            CombinStruct * pcombin_struct = (CombinStruct *)params;
            std::cout << pcombin_struct->data3_;
        }
    }
    std::cout << ")" << std::endl;
}