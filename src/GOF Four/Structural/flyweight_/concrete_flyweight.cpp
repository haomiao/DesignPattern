#include "stdafx.h"

#include <iostream>
#include "concrete_flyweight.h"


CConcreteFlyweight::CConcreteFlyweight( int inter_states ):
inter_states_(inter_states)
{

}


CConcreteFlyweight::~CConcreteFlyweight()
{

}


void CConcreteFlyweight::DoSomething( int extStates )
{
    //  具体的对传入的外部状态的处理过程
    std::cout << "CConcreteFlyweight::DoSomething(" << extStates << "), " << "CConcreteFlyweight::inter_states_: " << inter_states_ << std::endl;
}
