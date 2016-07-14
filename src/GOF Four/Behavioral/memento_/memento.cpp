#include "stdafx.h"
#include "memento.h"


Memento::Memento() :
num_state_( 0 ),
str_state_( "" )
{

}


Memento::~Memento()
{

}


void Memento::SetNumStates( int num_state )
{
    num_state_ = num_state;
}


void Memento::SetStrStates( std::string str_state )
{
    str_state_ = str_state;
}


int Memento::GetNumStates()
{
    return num_state_;
}


std::string Memento::GetStrStates()
{
    return str_state_;
}