///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_colleague.h
/// 	@brief	同事基类. 
/// 
///		各个相互通信的同事公共基类  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  16:04:10
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_COLLEAGUE_H_
#define     _BASE_COLLEAGUE_H_

#include <string>

//  模拟不同的交互操作
//  只是为了简化设计
enum  ExchangeInfo
{
    EIF_NO = 0,
    EIF_SLEEP = 1,
    EIF_WORK = 2,
    EIF_DRINK = 4,
};


class CBaseMediator;

class CBaseColleague
{
public:

    virtual ~CBaseColleague();

    int GetExchangeInfo();

    virtual void SetOutPutStr( std::string output_str ) = 0;

protected:

    CBaseColleague( CBaseMediator *pmediator, int exchange_info );

protected:

    CBaseMediator * pmediator_;

    //  感兴趣的事件(即可以接受的处理)
    int             exchange_info_;

    std::string     output_str_;
};


#endif  //  _BASE_COLLEAGUE_H_
