///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   element2.h
/// 	@brief	元素类子类2. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  17:32:17
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _ELEMENT_2_H_
#define     _ELEMENT_2_H_


#include "base_element.h"

class CElement2 : public CBaseElement
{
public:

    CElement2();

    virtual ~CElement2();

public:

    virtual void AcceptVisitor( CBaseVisitor *pvisitor );

public:

    void DoSomething1();

    void DoSomething2();
};


#endif  //  _ELEMENT_2_H_
