#pragma once

class Switchable
{
public:

    virtual ~Switchable(){};

    virtual void TurnOn() = 0;

    virtual void TurnOff() = 0;

    virtual bool IsTurnOn() = 0;

protected:
 
    Switchable(){};
};
