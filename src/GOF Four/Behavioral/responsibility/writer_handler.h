///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   writer_handler.h
/// 	@brief	写处理类. 
/// 
///		只对写事件或消息请求感兴趣  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  16:17:09
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _WRITER_HANDLER_H_
#define     _WRITER_HANDLER_H_

#include "base_handler.h"

class CWriterHandler : public CBaseHandler
{
public:

    CWriterHandler( CBaseHandler *psuccessor, int handle_request_type );

    virtual ~CWriterHandler();

public:

    virtual void HandleRequest( CRequest *prequest );

private:

    void DoSomethingWrite( void *params );
};



#endif  //  _WRITER_HANDLER_H_
