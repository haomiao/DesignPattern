///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   extend_handler.h
/// 	@brief	额外请求处理类. 
/// 
///		只对其他的额外事件或消息请求感兴趣  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  16:17:09
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _EXTEND_HANDLER_H_
#define     _EXTEND_HANDLER_H_

#include "ext_base_handler.h"

class CExtendHandler : public CExtBaseHandler
{
public:

    CExtendHandler( CBaseHandler *psuccessor, int handle_request_type );

    virtual ~CExtendHandler();

public:

    virtual void HandleRequest( CRequest *prequest );

private:

    void DoSomething( void *params );
};



#endif  //  _EXTEND_HANDLER_H_
