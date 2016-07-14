#include "stdafx.h"
#include <iostream>
#include "read_command.h"


CReadCommand::CReadCommand( CReciver *preciver ):
preciver_(preciver)
{

}


CReadCommand::~CReadCommand()
{

}


void CReadCommand::Excute()
{
    std::cout << "Enter CReadCommand::Excute() functhon~" << std::endl;

    if ( preciver_ != nullptr)
    {
        preciver_->Action();
    }

    std::cout << "Leave CReadCommand::Excute() functhon~" << std::endl;
}