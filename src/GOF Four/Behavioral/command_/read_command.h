///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   read_command.h
/// 	@brief	����������.   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  18:41:36
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _READ_COMMAND_H_
#define     _READ_COMMAND_H_


#include "command.h"

class CReadCommand : public Command
{
public:

    CReadCommand( CReciver *preciver );

    virtual ~CReadCommand();

public:

    //  ִ������ӿ�
    virtual void Excute();

private:

    CReciver *  preciver_;
};


#endif  //  _READ_COMMAND_H_
