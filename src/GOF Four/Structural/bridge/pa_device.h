///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   pa_device.h
/// 	@brief	PA设备类型. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  14:47:37
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PA_DEVICE_H_
#define     _PA_DEVICE_H_

#include "base_device.h"

class CBaseInterCommandComm;

class CPADevice : public CBaseDevice
{
public:

    CPADevice( CBaseInterCommandComm *pintercommand_comm );

    virtual ~CPADevice();

public:

    virtual bool connect();
    virtual unsigned int read();
    virtual unsigned int write();
    virtual bool closed();
};

#endif  //  _PA_DEVICE_H_
