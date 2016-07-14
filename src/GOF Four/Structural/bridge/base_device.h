///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_device.h
/// 	@brief	设备类型通信基类. 
/// 
///		主要提供不同设备操作相似接口抽象  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  14:43:32
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_DEVICE_H_
#define     _BASE_DEVICE_H_


class CBaseInterCommandComm;

class CBaseDevice
{

public:

    virtual ~CBaseDevice();

public:

    virtual bool connect() = 0;
    virtual unsigned int read() = 0;
    virtual unsigned int write() = 0;
    virtual bool closed() = 0; 

protected:

    CBaseDevice( CBaseInterCommandComm *pintercommand_comm );

    CBaseInterCommandComm *pintercommand_comm_;
};



#endif  //  _BASE_DEVICE_H_
