///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_colleague_a.h
/// 	@brief	同事子类A. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  16:11:41
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_COLLEAGUE_A_H_
#define     _CONCRETE_COLLEAGUE_A_H_

#include <string>
#include "base_colleague.h"

class CConcreteColleagueA : public CBaseColleague
{
public:

    CConcreteColleagueA( CBaseMediator *pmediator, int exchange_info );

    virtual ~CConcreteColleagueA();

public:

    void SleepingNotify();

    void WorkingNotify();

public:

    virtual void SetOutPutStr( std::string output_str );

private:

};


#endif  //  _CONCRETE_COLLEAGUE_A_H_
