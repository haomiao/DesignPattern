#include "stdafx.h"

#include "sleep_delay_command.h"

#include "active_object_engine.h"
#include "wakeup_command.h"

#include <iostream>
#include <memory>
#include <Windows.h>

SleepDelayCommand::SleepDelayCommand(unsigned long int time_out, ActiveObjectEngine * active_object_engine, char ch)
:active_object_engine_(active_object_engine),
time_out_(time_out),
is_started_(false),
old_time_( 0 ),
ch_(ch)
{

}


SleepDelayCommand::SleepDelayCommand( SleepDelayCommand &cmd ):
active_object_engine_(cmd.active_object_engine_),
time_out_(cmd.time_out_),
is_started_(cmd.is_started_),
old_time_(cmd.old_time_),
ch_(cmd.ch_)
{

}


SleepDelayCommand::~SleepDelayCommand()
{

}


void SleepDelayCommand::Run()
{
    unsigned long int current_time = ::GetTickCount();
    if ( !is_started_ )
    {
        is_started_ = true;
        old_time_ = current_time;
        std::unique_ptr<ICommand> newCmd( new SleepDelayCommand( *this ) );
        active_object_engine_->AddCommand( std::move(newCmd) );
    }
    else if ( current_time - old_time_ < time_out_ )
    {
        std::unique_ptr<ICommand> newCmd( new SleepDelayCommand( *this ) );
        active_object_engine_->AddCommand( std::move( newCmd ) );
    }
    else 
    {
        //  到时则添加唤醒命令至主动对象引擎
        //  否则重新添加睡眠命令至主动对象引擎,等待下次轮询时直接唤醒命令执行操作
        //  类似于命令替换的操作，事实上，很多时候不需要执行命令转化,到时间点时直接
        //  执行当前命令,且不再添加至主动对象引擎中的命令队列即可
        //std::unique_ptr<ICommand> wakeupCommand( new WakeupCommand( ch_ ) );
        //active_object_engine_->AddCommand( std::move( wakeupCommand ) );

        std::cout << "SleepDelay Comamnd TimeOut! " << ch_ << std::endl;
    }
    
}