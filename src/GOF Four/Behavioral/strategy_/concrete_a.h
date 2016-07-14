///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_a.h
/// 	@brief	具体实现策略子类A. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  15:00:32
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_A_H_
#define     _CONCRETE_A_H_


#include "base_strategy.h"

class CConcreteStrategyA : public CBaseStrategy
{
public:

    CConcreteStrategyA();

    virtual ~CConcreteStrategyA();

public:

    virtual void DoSomeAlgorithm();
};


#endif  //  _CONCRETE_A_H_
