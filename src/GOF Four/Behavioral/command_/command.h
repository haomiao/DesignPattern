///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   command.h
/// 	@brief	命令对象基类. 
/// 
///		提供最一般使用的接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  18:10:13
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _COMMAND_H_
#define     _COMMAND_H_

#include <iostream>
#include "reciver.h"
#include "reciver2.h"

//  命令基类，内部可以增加必要的参数、状态
class Command
{
public:

    virtual ~Command();

public:

    //  执行命令接口
    virtual void Excute() = 0;

protected:

    Command();
};


//  一种基于模板实现的简单命令
//  默认为提供无参、无返回值调用的过程
template<typename TReciver>
class TCommand : public Command
{
public:

    typedef void ( TReciver::*Action )();

public:

    TCommand( TReciver *reciver, Action action ) :
        reciver_(reciver),
        action_(action)
    {

    }

    virtual ~TCommand()
    {

    }

public:

    virtual void Excute()
    {
        std::cout << "Enter TCommand::Excute() functhon~" << std::endl;
        if ( reciver_ != nullptr && action_ != nullptr)
        {
            ( reciver_->*action_ )( );
        }
        std::cout << "Leave TCommand::Excute() functhon~" << std::endl;
    }

private:

    TReciver    *reciver_;
    Action      action_;
};

#endif  //  _COMMAND_H_
