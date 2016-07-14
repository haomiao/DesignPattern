///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_observer_a.h
/// 	@brief	具体的观察者A. 
///   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/22  11:58:39
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_OBSERVER_A_H_
#define     _CONCRETE_OBSERVER_A_H_

#include "base_observer.h"

class CConcreteObserverA : public CBaseObserver
{
public:

    //  参数使用的是抽象基类，意味着基类需要提供更多的接口
    //  若明确对某个目标感兴趣，可以以相应的目标类作为参数类型，而不是基类类型
    //  以减少目标基类的接口
    CConcreteObserverA( CBaseSubject *psubject );

    virtual ~CConcreteObserverA();

public:

    virtual void Update( CBaseSubject *psubject );

private:

    CBaseSubject *  psubject_;
};


#endif  //  _CONCRETE_OBSERVER_A_H_
