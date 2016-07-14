// abstract_server.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Light.h"
#include "TV.h"
#include "Switch.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    Light *light = new Light();
    Switch *switch_ = new Switch(light);
    
    cout << boolalpha << switch_->IsTurnOn() << endl;
    switch_->TurnOn();
    cout << boolalpha << switch_->IsTurnOn() << endl;
    switch_->TurnOff();
    cout << boolalpha << switch_->IsTurnOn() << endl;

    cout << endl;

    TV *tv = new TV();
    switch_->SetWitchObj( tv );

    cout << boolalpha << switch_->IsTurnOn() << endl;
    switch_->TurnOn();
    cout << boolalpha << switch_->IsTurnOn() << endl;
    switch_->TurnOff();
    cout << boolalpha << switch_->IsTurnOn() << endl;

    delete light;
    delete tv;
    delete switch_;

    return 0;
}
