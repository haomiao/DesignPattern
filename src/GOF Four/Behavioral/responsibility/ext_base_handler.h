///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   ext_base_handler.h
/// 	@brief	扩展的请求处理类. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  15:57:57
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _EXT_BASE_HANDLER_H_
#define     _EXT_BASE_HANDLER_H_

#include "base_handler.h"

class CExtBaseHandler : public CBaseHandler
{
public:

    virtual ~CExtBaseHandler();

public:

    //  处理请求的接口,每一个需要处理请求的子类，应实现该接口
    //  否则表示不处理任何请求
    //  相对于CBaseHandler，可以增加更多的额外控制处理和默认处理
    virtual void HandleRequest( CRequest *prequest );

protected:

    CExtBaseHandler( CBaseHandler *psuccessor, int handle_request_type );
};


#endif  //  _EXT_BASE_HANDLER_H_

