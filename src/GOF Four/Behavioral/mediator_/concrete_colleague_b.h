///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_colleague_b.h
/// 	@brief	同事子类B. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  16:11:41
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_COLLEAGUE_B_H_
#define     _CONCRETE_COLLEAGUE_B_H_

#include <string>
#include "base_colleague.h"

class CConcreteColleagueB : public CBaseColleague
{
public:

    CConcreteColleagueB( CBaseMediator *pmediator, int exchange_info );

    virtual ~CConcreteColleagueB();

public:

    void DrinkingNotify();

public:

    virtual void SetOutPutStr( std::string output_str );

private:

};


#endif  //  _CONCRETE_COLLEAGUE_B_H_
