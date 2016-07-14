///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   mac_command.h
/// 	@brief	宏命令（命令组合, 复杂命令）. 
/// 
///		提供命名集的命令  
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

//  可以改造为队列形式的命名执行方式
//  排队、缓存、延迟执行、或某个事件或时间点执行
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
