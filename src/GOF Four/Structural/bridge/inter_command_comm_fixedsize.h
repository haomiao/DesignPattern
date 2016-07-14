///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   inter_command_comm_fixedsize.h
/// 	@brief	中间通信数据处理实现类，固定长度方式. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  14:36:05
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _INTERCOMMAND_COMM_FIXEDSIZE_H_
#define     _INTERCOMMAND_COMM_FIXEDSIZE_H_


#include "base_intercommand_comm.h"

class CBaseComm;

class CInterCommandCommFixedSize : public CBaseInterCommandComm
{
public:

    CInterCommandCommFixedSize( CBaseComm *pbase_comm );

    virtual ~CInterCommandCommFixedSize();

public:

    virtual bool connect();
    virtual unsigned int read();
    virtual unsigned int write();
    virtual bool closed();

public:

    virtual void analysisData();
};


#endif  //  _INTERCOMMAND_COMM_FIXEDSIZE_H_
