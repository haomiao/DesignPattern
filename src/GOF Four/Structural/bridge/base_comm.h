///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_comm.h
/// 	@brief	ͨ�ų������. 
/// 
///		�ṩ�����ĳ���ͨ�Ż���ӿ�  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  14:08:34
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_COMM_H_
#define     _BASE_COMM_H_


class CBaseComm
{
public:

    virtual ~CBaseComm();

public:

    virtual bool connect() = 0;
    virtual unsigned int read() = 0;
    virtual unsigned int write() = 0;
    virtual bool closed() = 0;

protected:

    CBaseComm();
};


#endif  //  _BASE_COMM_H_
