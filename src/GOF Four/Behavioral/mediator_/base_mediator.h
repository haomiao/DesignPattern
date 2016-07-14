///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_mediator.h
/// 	@brief	中介者基类(协调各个同事相互交互、通信). 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  16:06:21
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_MEDIATOR_H_
#define     _BASE_MEDIATOR_H_

#include <string>
#include "base_colleague.h"

class CBaseMediator
{
public:

    virtual ~CBaseMediator();

public:

    //  通告消息交互
    virtual void NotifyAction( CBaseColleague *pcolleague, int exchange_info, std::string notify_str ) = 0;

protected:

    CBaseMediator();
};


#endif  //  _BASE_MEDIATOR_H_
