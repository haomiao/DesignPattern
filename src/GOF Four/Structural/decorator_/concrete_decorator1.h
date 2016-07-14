///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_decorator1.h
/// 	@brief	具体的某个装饰者1. 
///   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  17:48:02
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_DECORATOR1_H_
#define     _CONCRETE_DECORATOR1_H_

#include "decorator.h"

class CConcreteDecorator1 : public CDecorator
{
public:

    CConcreteDecorator1( CComponent *pcomponent );

    virtual ~CConcreteDecorator1();

public:

    virtual void DoSomething();

private:

    //  添加的额外的其他职责
    void DoSomethingOthersPre();
    void DoSomethingOthersLast();
};

#endif  //  _CONCRETE_DECORATOR1_H_