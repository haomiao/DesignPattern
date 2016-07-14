///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   visitor_a.h
/// 	@brief	访问者子类A. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  17:26:23
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _VISITOR_A_H_
#define     _VISITOR_A_H_

#include "base_visitor.h"

class CVisitorA :  public CBaseVisitor
{
public:

    CVisitorA();

    virtual ~CVisitorA();

public:

    virtual void OnVisitorElement1( CElement1 *pelement );
    virtual void OnVisitorElement2( CElement2 *pelement );
    virtual void OnVisitorElementOther( CElementOther *pelement );
};


#endif  //  _VISITOR_A_H_
