#include "StdAfx.h"
#include "wakeup_command.h"
#include <iostream>


WakeupCommand::WakeupCommand(char ch):
ch_(ch)
{

}


WakeupCommand::~WakeupCommand()
{

}


void WakeupCommand::Run()
{
    std::cout << "Wakeup Comamnd TimeOut! " << ch_ << std::endl;
}