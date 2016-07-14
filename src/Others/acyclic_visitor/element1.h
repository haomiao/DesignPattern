///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   element1.h
/// 	@brief	元素类子类1. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  17:32:17
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _ELEMENT_1_H_
#define     _ELEMENT_1_H_


#include "base_element.h"

class CElement1 : public CBaseElement
{
public:

    CElement1();

    virtual ~CElement1();

public:

    virtual void AcceptVisitor( CBaseVisitor *pvisitor );

public:

    void DoSomething1();

    void DoSomething2();
};


#endif  //  _ELEMENT_1_H_
