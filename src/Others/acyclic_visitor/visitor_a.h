///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   visitor_a.h
/// 	@brief	����������A. 
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

class CElement1;

class CVisitorA : public CBaseVisitor
{
public:

    CVisitorA();

    virtual ~CVisitorA();

public:

    //  ����������ʵ���Լ�����Ȥ�Ľӿ�ʵ��
    virtual void OnVisitorElement1( CElement1 *pelement );
};


#endif  //  _VISITOR_A_H_
