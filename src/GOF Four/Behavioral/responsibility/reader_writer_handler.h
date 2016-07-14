///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   reader_writer_handler.h
/// 	@brief	读写处理类. 
/// 
///		只对读或写，与事件或消息请求感兴趣  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  16:17:09
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _READER_WRITER_HANDLER_H_
#define     _READER_WRITER_HANDLER_H_

#include "base_handler.h"

class CReaderWriterHandler : public CBaseHandler
{
public:

    CReaderWriterHandler( CBaseHandler *psuccessor, int handle_request_type );

    virtual ~CReaderWriterHandler();

public:

    virtual void HandleRequest( CRequest *prequest );

private:

    void DoSomethingRead( void *params );
    void DoSomethingWrite( void *params );
    void DoSomethingReadWrite( void *params );
};



#endif  //  _READER_WRITER_HANDLER_H_
