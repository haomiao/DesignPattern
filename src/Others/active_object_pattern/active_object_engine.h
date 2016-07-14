#pragma once

#include <list>
#include <memory>

class ICommand;

class ActiveObjectEngine
{
public:

    ActiveObjectEngine();

    ~ActiveObjectEngine();

    void AddCommand(std::unique_ptr<ICommand> command);

    void Run();

private:

    typedef std::list<std::unique_ptr<ICommand> > COMMAND_LIST;
    COMMAND_LIST    command_list_;
};
