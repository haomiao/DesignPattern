#include "StdAfx.h"
#include "Light.h"

Light::Light():
light_state_(false)
{

}


Light::~Light()
{

}


void Light::TurnOn()
{
    light_state_ = true;
}


void Light::TurnOff()
{
    light_state_ = false;
}


bool Light::IsTurnOn()
{
    return light_state_;
}