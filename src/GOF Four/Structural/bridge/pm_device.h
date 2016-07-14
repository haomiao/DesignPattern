///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   pm_device.h
/// 	@brief	PM设备类型. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  14:47:37
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PM_DEVICE_H_
#define     _PM_DEVICE_H_

#include "base_device.h"

class CBaseInterCommandComm;

class CPMDevice : public CBaseDevice
{
public:

    CPMDevice( CBaseInterCommandComm *pintercommand_comm );

    virtual ~CPMDevice();

public:

    virtual bool connect();
    virtual unsigned int read();
    virtual unsigned int write();
    virtual bool closed();
};

#endif  //  _PM_DEVICE_H_
