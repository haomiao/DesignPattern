///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   leaf_b.h
/// 	@brief	Ҷ�ӽڵ����B. 
/// 
///		Ҷ�ӽڵ������һ��Ϊ�����ĳ�����͵����  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  15:53:03
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _LEAF_B_H_
#define     _LEAF_B_H_


#include "component.h"

class CLeafB : public CComponent
{
public:

    CLeafB();

    virtual ~CLeafB();

public:

    virtual void DoSomething();
};


#endif  //  _LEAF_B_H_
