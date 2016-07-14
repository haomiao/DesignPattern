// responsibility.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

#include "request.h"
#include "reader_handler.h"
#include "writer_handler.h"
#include "reader_writer_handler.h"
#include "extend_handler.h"


void ClientToUseHandler( CBaseHandler *phandler, CRequest *prequest)
{
    //  将请求交给以phandle处理对象开始的所在链中某个处理者处理
    if (phandler != nullptr)
    {
        phandler->HandleRequest( prequest );
    }
}


//  职责链功能上类似于MFC框架中的消息传递处理方式
//  此外职责链可结合组合模式一起使用
int _tmain(int argc, _TCHAR* argv[])
{
    int data1 = 24;
    CRequest reader_request( HRT_READ, &data1 );
    CBaseHandler *pread_handler = new CReaderHandler(nullptr, HRT_READ);
    ClientToUseHandler( pread_handler, &reader_request );
    
    std::cout << std::endl;

    std::string data2 = "haomiao";
    CRequest writer_request( HRT_WRITE, (void *)data2.c_str() );
    CBaseHandler *pwrite_handler = new CWriterHandler( pread_handler, HRT_WRITE );
    ClientToUseHandler( pwrite_handler, &writer_request );
    
    std::cout << std::endl;

    CombinStruct combin_struct(100, 167.011f, "zhouhao");
    CRequest reader_writer_request( HRT_READ | HRT_WRITE | HRT_READ_WRITE, &combin_struct );
    CBaseHandler *pread_write_handler = new CReaderWriterHandler( pwrite_handler, HRT_READ | HRT_WRITE | HRT_READ_WRITE);
    ClientToUseHandler( pread_write_handler, &reader_writer_request );

    std::cout << std::endl;

    int data = 55;
    CRequest extend_request( HRT_READ | HRT_WRITE | HRT_READ_WRITE | HRT_EXTEND, &data );
    CExtendHandler *pextend_handler = new CExtendHandler( nullptr, HRT_NO );
    ClientToUseHandler( pextend_handler, &extend_request );

    std::cout << std::endl;

    pextend_handler->SetRequestHandler( pread_write_handler, HRT_NO );
    ClientToUseHandler( pextend_handler, &extend_request );

    std::cout << std::endl;

    ClientToUseHandler( pread_handler, &reader_writer_request );

    delete pread_handler; 
    delete pwrite_handler;
    delete pread_write_handler;
    delete pextend_handler;

	return 0;
}

