///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   template_method.h
/// 	@brief	模板方法子类. 
/// 
///		主要实现自己需要修改的实现或算法  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  16:25:29
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _TEMPLATE_METHOD_H_
#define     _TEMPLATE_METHOD_H_


#include "base_template_method.h"

class CTemplateMethod : public CBaseTemplateMethod
{
public:

    CTemplateMethod();

    virtual ~CTemplateMethod();

public:

    virtual void DoSomethingOperator1();
    virtual void DoSomethingOperator2();
};


#endif  //  _TEMPLATE_METHOD_H_
