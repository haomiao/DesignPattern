///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   inter_command_comm_prefix.h
/// 	@brief	中间通信数据处理实现类，前缀方式. 
///  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  14:23:05
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _INTERCOMMAND_COMM_PREFIX_H_
#define     _INTERCOMMAND_COMM_PREFIX_H_


#include "base_intercommand_comm.h"

class CBaseComm;

class CInterCommandCommPrefix : public CBaseInterCommandComm
{
public:

    CInterCommandCommPrefix( CBaseComm *pbase_comm );

    virtual ~CInterCommandCommPrefix();

public:

    virtual bool connect();
    virtual unsigned int read();
    virtual unsigned int write();
    virtual bool closed();

public:

    virtual void analysisData();
};


#endif  //  _INTERCOMMAND_COMM_PREFIX_H_
