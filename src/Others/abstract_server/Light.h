#pragma once

#include "switchable.h"

class Light :public Switchable
{
public:

    Light();

    ~Light();

    virtual void TurnOn();

    virtual void TurnOff();

    virtual bool IsTurnOn();

private:

    bool    light_state_;
};
