///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   write_command.h
/// 	@brief	д��������.   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  18:41:36
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _WRITE_COMMAND_H_
#define     _WRITE_COMMAND_H_


#include "command.h"

class CWriteCommand : public Command
{
public:

    CWriteCommand( CReciver2 *preciver );

    virtual ~CWriteCommand();

public:

    //  ִ������ӿ�
    virtual void Excute();

private:

    CReciver2 *  preciver_;
};


#endif  //  _WRITE_COMMAND_H_
