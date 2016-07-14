///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_b.h
/// 	@brief	具体实现策略子类B. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  15:00:32
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _CONCRETE_B_H_
#define     _CONCRETE_B_H_

#include "base_strategy.h"

class CConcreteStrategyB : public CBaseStrategy
{
public:

    CConcreteStrategyB();

    virtual ~CConcreteStrategyB();

public:

    virtual void DoSomeAlgorithm();
};


#endif  //  _CONCRETE_B_H_
