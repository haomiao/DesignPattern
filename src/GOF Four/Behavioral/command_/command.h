///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   command.h
/// 	@brief	����������. 
/// 
///		�ṩ��һ��ʹ�õĽӿ�  
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

//  ������࣬�ڲ��������ӱ�Ҫ�Ĳ�����״̬
class Command
{
public:

    virtual ~Command();

public:

    //  ִ������ӿ�
    virtual void Excute() = 0;

protected:

    Command();
};


//  һ�ֻ���ģ��ʵ�ֵļ�����
//  Ĭ��Ϊ�ṩ�޲Ρ��޷���ֵ���õĹ���
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
