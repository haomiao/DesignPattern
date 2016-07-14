///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   read_reciver.h
/// 	@brief	某个具体的接收者对象类. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  18:24:58
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _READ_RECIVER_H_
#define     _READ_RECIVER_H_


#include "reciver.h"

class CReadReciver : public CReciver
{
public:

    CReadReciver();

    virtual ~CReadReciver();

public:

    virtual void Action();

};


#endif  //  _READ_RECIVER_H_
