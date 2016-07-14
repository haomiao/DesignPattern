///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   reader_handler.h
/// 	@brief	读处理类. 
/// 
///		只对读事件或消息请求感兴趣  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  16:17:09
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _READER_HANDLER_H_
#define     _READER_HANDLER_H_

#include "base_handler.h"

class CReaderHandler : public CBaseHandler
{
public:

    CReaderHandler( CBaseHandler *psuccessor, int handle_request_type );

    virtual ~CReaderHandler();

public:

    virtual void HandleRequest( CRequest *prequest );

private:

    void DoSomethingRead( void *params );
};



#endif  //  _READER_HANDLER_H_
