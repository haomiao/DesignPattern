// active_object_pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "active_object_engine.h"
#include "sleep_delay_command.h"

/**  主动对象模式(基于命令模式) */ 

int _tmain(int argc, _TCHAR* argv[])
{
    ActiveObjectEngine active_objevt_engine;

    std::unique_ptr<ICommand> command1(new SleepDelayCommand( 1000, &active_objevt_engine, 'A' ) );
    std::unique_ptr<ICommand> command2(new SleepDelayCommand( 5000, &active_objevt_engine, 'B' ) );
    std::unique_ptr<ICommand> command3( new SleepDelayCommand( 500, &active_objevt_engine, 'C' ) );
    std::unique_ptr<ICommand> command4(new SleepDelayCommand( 10, &active_objevt_engine, 'E' ) );
    std::unique_ptr<ICommand> command5(new SleepDelayCommand( 4500, &active_objevt_engine, 'D' ) );

    active_objevt_engine.AddCommand( std::move( command1 ) );
    active_objevt_engine.AddCommand( std::move( command2 ) );
    active_objevt_engine.AddCommand( std::move( command3 ) );
    active_objevt_engine.AddCommand( std::move( command4 ) );
    active_objevt_engine.AddCommand( std::move( command5 ) );
	
    active_objevt_engine.Run();
    return 0;
}

