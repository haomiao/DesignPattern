#pragma once
#include "icommand.h"

class WakeupCommand :public ICommand
{
public:

    WakeupCommand(char ch);

    ~WakeupCommand();

    virtual void Run();

private:

    char ch_;
};
