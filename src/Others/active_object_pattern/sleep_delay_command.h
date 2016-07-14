#pragma once
#include "ICommand.h"


class ActiveObjectEngine;

class SleepDelayCommand :public ICommand
{
public:

    SleepDelayCommand(unsigned long int time_out, ActiveObjectEngine * active_object_engine, char ch);

    SleepDelayCommand( SleepDelayCommand &cmd );

    ~SleepDelayCommand();

    virtual void Run();

private:

    ActiveObjectEngine *    active_object_engine_;

    unsigned long int       time_out_;

    bool                    is_started_;

    unsigned long int       old_time_;

    char                    ch_;
};
