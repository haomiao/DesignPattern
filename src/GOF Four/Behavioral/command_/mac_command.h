///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   mac_command.h
/// 	@brief	������������, �������. 
/// 
///		�ṩ������������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  8:50:36
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _MAC_COMMAND_H_
#define     _MAC_COMMAND_H_


#include <list>
#include "command.h"

//  ���Ը���Ϊ������ʽ������ִ�з�ʽ
//  �Ŷӡ����桢�ӳ�ִ�С���ĳ���¼���ʱ���ִ��
class CMacCommand : public Command
{
public:

    CMacCommand();

    virtual ~CMacCommand();

public:

    virtual void AddCommand( Command *pcommand );

    virtual void RemoveCommand( Command *pcommand );

    virtual void Excute();

private:

    std::list<Command *>    command_list_;
};


#endif  //  _MAC_COMMAND_H_
