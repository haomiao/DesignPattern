#include "StdAfx.h"
#include "monostate.h"

unsigned int Monostate::num_ = 0;

Monostate::Monostate()
{

}


Monostate::~Monostate()
{

}


void Monostate::SetNum(unsigned int num)
{
    num_ = num;
}


unsigned int Monostate::GetNum()
{
    return num_;
}
