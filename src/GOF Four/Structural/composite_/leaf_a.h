///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   leaf_a.h
/// 	@brief	叶子节点组件A. 
/// 
///		叶子节点组件，一般为具体的某个类型的组件  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  15:53:03
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _LEAF_A_H_
#define     _LEAF_A_H_


#include "component.h"

class CLeafA : public CComponent
{
public:

    CLeafA();

    virtual ~CLeafA();

public:

    virtual void DoSomething();
};


#endif  //  _LEAF_A_H_
