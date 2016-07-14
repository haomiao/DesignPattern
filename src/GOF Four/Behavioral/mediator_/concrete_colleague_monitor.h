///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_colleague_monitor.h
/// 	@brief	同事子类监视者(只负责全局通告). 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  16:11:41
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_COLLEAGUE_MONITOR_H_
#define     _CONCRETE_COLLEAGUE_MONITOR_H_

#include <string>
#include "base_colleague.h"

class CConcreteColleagueMonitor : public CBaseColleague
{
public:

    CConcreteColleagueMonitor( CBaseMediator *pmediator, int exchange_info );

    virtual ~CConcreteColleagueMonitor();

public:

    virtual void SetOutPutStr( std::string output_str );

    void NotifyAll( std::string notify_str );

private:

};


#endif  //  _CONCRETE_COLLEAGUE_MONITOR_H_
