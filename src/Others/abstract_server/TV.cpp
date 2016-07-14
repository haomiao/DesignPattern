#include "StdAfx.h"
#include "TV.h"

TV::TV() :
tv_state_( false )
{

}


TV::~TV()
{

}


void TV::TurnOn()
{
    tv_state_ = true;
}


void TV::TurnOff()
{
    tv_state_ = false;
}


bool TV::IsTurnOn()
{
    return tv_state_;
}