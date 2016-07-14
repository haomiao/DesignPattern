///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   unshared_concrete_flyweight.h
/// 	@brief	某个具体的不可共享的享元类. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  10:40:12
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _UNSHARED_CONCRETE_FLYWEIGHT_H_
#define     _UNSHARED_CONCRETE_FLYWEIGHT_H_

#include "flyweight.h"

class CUnsharedConcreteFlyweight : public CFlyweight
{
public:

    //  内部状态在初始化的时候设置，此后不再被更改
    CUnsharedConcreteFlyweight( int inter_states_ );

    virtual ~CUnsharedConcreteFlyweight();

public:

    //  由操作参数引入外部状态,事实上对于不共享的子类对象，对外部状态不接受处理
    virtual void DoSomething( int extStates );

private:

    int     inter_intrinsic_states_;   //  内部固定状态
};


#endif  //  _UNSHARED_CONCRETE_FLYWEIGHT_H_
