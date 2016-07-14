#include "stdafx.h"
#include "concrete_facade_b.h"


CConcreteFacadeB::CConcreteFacadeB()
{

}


CConcreteFacadeB::~CConcreteFacadeB()
{

}


void CConcreteFacadeB::DoOneThing()
{
    code_.Coding();
}


void CConcreteFacadeB::DoSomeThing()
{
    walk_.Walking();
}


void CConcreteFacadeB::DoOtherThing()
{
    work_.Working();
}