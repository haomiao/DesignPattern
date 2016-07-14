///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_handler.h
/// 	@brief	请求处理基类. 
/// 
///		提供职责连中各类对象处理事件或请求的处理接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  15:40:38
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_HANDLER_H_
#define     _BASE_HANDLER_H_

#include "request.h"


//  请求处理对象基类
//  任何需要处理事件或请求的子类可继承该类，
//  并实现处理各自感兴趣的请求或事件
class CBaseHandler
{
public:

    virtual ~CBaseHandler();

public:

    //  处理请求的接口,每一个需要处理请求的子类，应实现该接口
    //  否则表示不处理任何请求
    //  各子类自身处理自己感兴趣的请求，并直接返回；
    //  若不感兴趣，则交给后继者处理，若无后继者，则交给父类默认的处理
    virtual void HandleRequest( CRequest *prequest );

    //  可通过外部设置，重新设置处理者对象和感兴趣的请求
    void SetRequestHandler( CBaseHandler *psuccessor, int handle_request_type );

private:

    //  默认处理不被处理的请求
    void DoDefaultThing();

protected:

    //  psuccessor:             后继处理者(某些框架里面可称为父处理对象)
    //  handle_request_type:    处理请求类型
    CBaseHandler( CBaseHandler *psuccessor, int handle_request_type );

protected:

    CBaseHandler    *psuccessor_;           //  后继处理者(职责连中下一个处理对象)
    int             handle_request_type_;   //  当前处理者可处理或感兴趣的请求类型
};


#endif  //  _BASE_HANDLER_H_
