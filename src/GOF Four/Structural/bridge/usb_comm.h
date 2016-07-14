///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   usb_comm.h
/// 	@brief	USB通信方式. 
/// 
///		主要实现基类提供的接口具体实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  14:12:09
///  
///  
/////////////////////////////////////////////////////////////////////


#include "base_comm.h"

class CUsbComm : public CBaseComm
{
public:

    CUsbComm();

    virtual ~CUsbComm();

public:

    virtual bool connect();
    virtual unsigned int read();
    virtual unsigned int write();
    virtual bool closed();
};

