#include "stdafx.h"
#include "mac_command.h"


CMacCommand::CMacCommand()
{

}


CMacCommand::~CMacCommand()
{
    while (!command_list_.empty() )
    {
        std::list<Command *>::iterator it = command_list_.begin();
        delete ( *it );
        command_list_.erase( it );
    }
}


void CMacCommand::AddCommand( Command *pcommand )
{
    command_list_.push_back( pcommand );
}


void CMacCommand::RemoveCommand( Command *pcommand )
{
    command_list_.remove( pcommand );
}


void CMacCommand::Excute()
{
    std::list<Command *>::iterator it = command_list_.begin();
    std::list<Command *>::iterator end = command_list_.end();
    for ( ; it != end; ++it )
    {
        (*it)->Excute();
    }
}