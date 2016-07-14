///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   light_on_state.h
/// 	@brief	µÆ¿ªÆô×´Ì¬. 
///   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/23  14:50:39
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _LIGHT_ON_STATE_H_
#define     _LIGHT_ON_STATE_H_


#include "light_base_state.h"

class LightOnState : public LightBaseState
{
public:

    LightOnState( Programmer * pprogrammer );

    virtual ~LightOnState();

public:

};


#endif  //  _LIGHT_ON_STATE_H_
