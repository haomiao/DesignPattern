#include "stdafx.h"

#include <iostream>
#include "memento.h"
#include "originator.h"


Originator::Originator():
num_(0),
float_(0.0f),
str_("")
{

}


Originator::~Originator()
{

}


void Originator::SetNum( int num_state )
{
    num_ = num_state;
}


void Originator::SetFloat( float float_state )
{
    float_ = float_state;
}


void Originator::SetStr( std::string str_state )
{
    str_ = str_state;
}


Memento *Originator::GetMemento()
{
    Memento *pmemenoto = new Memento();
    pmemenoto->SetNumStates( num_ );
    pmemenoto->SetStrStates( str_ );
    return pmemenoto;
}



void Originator::RestoreMemento( Memento *pmemento )
{
    if ( pmemento != nullptr)
    {
        num_ = pmemento->GetNumStates();
        str_ = pmemento->GetStrStates();
    }
}


void Originator::PrintOutStates()
{
    std::cout << "state num: " << num_ << std::endl;
    std::cout << "state str: " << str_ << std::endl;
    std::cout << "state float: " << float_ << std::endl;
}
