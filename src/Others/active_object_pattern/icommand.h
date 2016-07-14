#pragma once

class ICommand
{
public:

    virtual ~ICommand()
    {

    }

    virtual void Run() = 0;

protected:

    ICommand()
    {

    }
};
