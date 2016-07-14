///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_component.h
/// 	@brief	某个具体的组件. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  17:42:32
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_COMPONENT_H_
#define     _CONCRETE_COMPONENT_H_

#include "component.h"

class CConcreteComponent : public CComponent
{
public:

    CConcreteComponent();

    virtual ~CConcreteComponent();

public:

    virtual void DoSomething();
};


#endif  //  _CONCRETE_COMPONENT_H_
