///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   visitor_b.h
/// 	@brief	����������B. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  17:26:23
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _VISITOR_B_H_
#define     _VISITOR_B_H_

#include "base_visitor.h"

class CElement2;

class CVisitorB :  public CBaseVisitor
{
public:

    CVisitorB();

    virtual ~CVisitorB();

public:

    //  ����������ʵ���Լ�����Ȥ�Ľӿ�ʵ��
    virtual void OnVisitorElement2( CElement2 *pelement );
};


#endif  //  _VISITOR_B_H_
