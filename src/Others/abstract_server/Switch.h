#pragma once

class Switchable;

class Switch
{
public:

    explicit Switch(Switchable * object);

    ~Switch();

    void SetWitchObj(Switchable * object);

    void TurnOn();

    void TurnOff();

    bool IsTurnOn();

private:

    Switchable * object_;
};
