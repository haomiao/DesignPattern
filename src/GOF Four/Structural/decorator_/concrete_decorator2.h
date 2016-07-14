///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_decorator2.h
/// 	@brief	�����ĳ��װ����2. 
///   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  17:48:02
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_DECORATOR2_H_
#define     _CONCRETE_DECORATOR2_H_

#include "decorator.h"

class CConcreteDecorator2 : public CDecorator
{
public:

    CConcreteDecorator2( CComponent *pcomponent );

    virtual ~CConcreteDecorator2();

public:

    virtual void DoSomething();

private:

    //  ��ӵĶ��������ְ��
    void DoOthersPre();
    void DoOthersLast();
};

#endif  //  _CONCRETE_DECORATOR2_H_