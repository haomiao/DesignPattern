#include "StdAfx.h"

#include "switchable.h"
#include "Switch.h"

Switch::Switch(Switchable * object):
object_(object)
{

}


Switch::~Switch()
{

}


void Switch::TurnOn()
{
    object_->TurnOn();
}


void Switch::TurnOff()
{
    object_->TurnOff();
}


bool Switch::IsTurnOn()
{
    return object_->IsTurnOn();
}


void Switch::SetWitchObj( Switchable * object )
{
    object_ = object;
}