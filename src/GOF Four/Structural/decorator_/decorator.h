///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   decorator.h
/// 	@brief	装饰者基类. 
/// 
///		提供与组件相同的接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  17:45:25
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _DECORATOR_H_
#define     _DECORATOR_H_


#include "component.h"

class CDecorator : public CComponent
{
public:

    CDecorator( CComponent *pcomponent );

    virtual ~CDecorator();

public:

    virtual void DoSomething();

private:

    CComponent *pcomponent_;
};



#endif  //  _DECORATOR_H_
