#include "stdafx.h"

#include <iostream>
#include "unshared_concrete_flyweight.h"


CUnsharedConcreteFlyweight::CUnsharedConcreteFlyweight( int inter_states ) :
inter_intrinsic_states_( inter_states )
{

}


CUnsharedConcreteFlyweight::~CUnsharedConcreteFlyweight()
{

}


void CUnsharedConcreteFlyweight::DoSomething( int extStates )
{
    std::cout << "CUnsharedConcreteFlyweight::DoSomething() " << "CUnsharedConcreteFlyweight::inter_states_: " << inter_intrinsic_states_ << std::endl;
}
