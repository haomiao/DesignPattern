///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   light_base_state.h
/// 	@brief	��״̬����. 
/// 
///		�ṩ������״̬�������ڲ�ʵ�ֵĳ���ӿڡ�����ʵ�� 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/23  14:46:48
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _LIGHT_BASE_STATE_H_
#define     _LIGHT_BASE_STATE_H_

#include "programmer.h"

class LightBaseState
{
public:

    virtual ~LightBaseState();

public:

    virtual void DoSomething();

protected:

    LightBaseState( Programmer * pprogrammer);

protected:

    Programmer * pprogrammer_;
};



#endif  //  _LIGHT_BASE_STATE_H_