///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_facade_b.h
/// 	@brief	具体外观实现类B. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  9:06:07
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_FACADE_B_H_
#define     _CONCRETE_FACADE_B_H_

#include "sub_systems.h"
#include "base_facade.h"

class CConcreteFacadeB :  public CBaseFacade
{
public:

    CConcreteFacadeB();

    virtual ~CConcreteFacadeB();

public:

    virtual void DoOneThing();
    virtual void DoSomeThing();
    virtual void DoOtherThing();

private:

    //  当前外观用到的子系统中的类
    CCode       code_;
    CWalk       walk_;
    CWork       work_;
};


#endif  //  _CONCRETE_FACADE_A_H_
