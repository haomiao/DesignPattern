#include "stdafx.h"
#include "concrete_facade_a.h"


CConcreteFacadeA::CConcreteFacadeA()
{

}


CConcreteFacadeA::~CConcreteFacadeA()
{

}


void CConcreteFacadeA::DoOneThing()
{
    sleep_.Sleeping();
}


void CConcreteFacadeA::DoSomeThing()
{
    eat_.Eating();
}


void CConcreteFacadeA::DoOtherThing()
{
    code_.Coding();
}