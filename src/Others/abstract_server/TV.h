#pragma once

#include "switchable.h"

class TV :public Switchable
{
public:

    TV();

    ~TV();

    virtual void TurnOn();

    virtual void TurnOff();

    virtual bool IsTurnOn();

private:

    bool    tv_state_;
};
