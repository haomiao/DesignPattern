///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_default.h
/// 	@brief	具体实现策略子类，默认类. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  15:00:32
///  
///  
/////////////////////////////////////////////////////////////////////


#include "base_strategy.h"

class CConcreteDefault : public CBaseStrategy
{
public:

    CConcreteDefault();

    virtual ~CConcreteDefault();

public:

    virtual void DoSomeAlgorithm();
};

