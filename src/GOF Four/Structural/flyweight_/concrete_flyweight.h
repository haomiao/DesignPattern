///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_flyweight.h
/// 	@brief	某个具体的可共享的享元类. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  10:40:12
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_FLYWEIGHT_H_
#define     _CONCRETE_FLYWEIGHT_H_

#include "flyweight.h"

class CConcreteFlyweight : public CFlyweight
{
public:

    //  内部状态在初始化的时候设置，此后不再被更改
    CConcreteFlyweight( int inter_states_ );

    virtual ~CConcreteFlyweight();

public:

    //  由操作参数引入外部状态
    virtual void DoSomething( int extStates );

private:

    int     inter_states_;      //  内部状态
};


#endif  //  _CONCRETE_FLYWEIGHT_H_
