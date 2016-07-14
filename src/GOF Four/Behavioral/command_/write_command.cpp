#include "stdafx.h"
#include <iostream>
#include "write_command.h"


CWriteCommand::CWriteCommand( CReciver2 *preciver ) :
preciver_(preciver)
{

}


CWriteCommand::~CWriteCommand()
{

}


void CWriteCommand::Excute()
{
    std::cout << "Enter CWriteCommand::Excute() functhon~" << std::endl;

    if ( preciver_ != nullptr)
    {
        preciver_->Action();
    }

    std::cout << "Leave CWriteCommand::Excute() functhon~" << std::endl;
}