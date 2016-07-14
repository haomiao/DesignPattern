#include "StdAfx.h"

#include <iostream>
#include <Windows.h>

#include "icommand.h"
#include "active_object_engine.h"

ActiveObjectEngine::ActiveObjectEngine()
{

}


ActiveObjectEngine::~ActiveObjectEngine()
{
    if (!command_list_.empty() )
    {
        command_list_.clear();
    }
}


void ActiveObjectEngine::AddCommand( std::unique_ptr<ICommand> command )
{
    command_list_.push_back(std::move(command) );
}


void ActiveObjectEngine::Run()
{
    unsigned int long start_time = GetTickCount();
    //unsigned long long int use_count = 0;

    /*  通过代码，可以发现，部分性能损失在不断地命令对象的拷贝、删除上 */ 
    //  类似于模拟单线程环境下执行多线程操作
    //  通过轮询命令执行
    while(!command_list_.empty() )
    {
        const std::unique_ptr<ICommand>&cmd = command_list_.front();
        cmd->Run();
        command_list_.pop_front();
        //Sleep(0);
        //++use_count;
    }

    unsigned int long end_time = GetTickCount();
    std::cout << "Use Total Time : " << end_time - start_time << std::endl;
    //std::cout << "Use Counts : " << use_count << std::endl;
}