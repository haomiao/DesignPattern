///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_facade_a.h
/// 	@brief	具体外观实现类A. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  9:06:07
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_FACADE_A_H_
#define     _CONCRETE_FACADE_A_H_

#include "sub_systems.h"
#include "base_facade.h"

class CConcreteFacadeA :  public CBaseFacade
{
public:

    CConcreteFacadeA();

    virtual ~CConcreteFacadeA();

public:

    virtual void DoOneThing();
    virtual void DoSomeThing();
    virtual void DoOtherThing();

private:

    //  当前外观用到的子系统中的类
    CSleep      sleep_;
    CEat        eat_;
    CCode       code_;
};


#endif  //  _CONCRETE_FACADE_A_H_
