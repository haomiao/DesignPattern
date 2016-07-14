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
    //  ����ĶԴ�����ⲿ״̬�Ĵ������
    std::cout << "CConcreteFlyweight::DoSomething(" << extStates << "), " << "CConcreteFlyweight::inter_states_: " << inter_states_ << std::endl;
}
