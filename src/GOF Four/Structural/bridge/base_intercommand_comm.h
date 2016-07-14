///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_intercommand_comm.h
/// 	@brief	通信中间层数据处理抽象基类. 
/// 
///		提供基本的抽象通信中间层基类接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  14:18:34
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_INTERCOMMAND_COMM_H_
#define     _BASE_INTERCOMMAND_COMM_H_

class CBaseComm;

class CBaseInterCommandComm
{
public:

    virtual ~CBaseInterCommandComm();

public:

    virtual bool connect() = 0;
    virtual unsigned int read() = 0;
    virtual unsigned int write() = 0;
    virtual bool closed() = 0;

public:

    virtual void analysisData() = 0;

protected:

    CBaseInterCommandComm( CBaseComm *pbase_comm );

    CBaseComm * pbase_comm_;
};


#endif  //  _BASE_INTERCOMMAND_COMM_H_
