#include "stdafx.h"

#include <iostream>
#include "sub_systems.h"

void CSleep::Sleeping()
{
    std::cout << "CSleep::Sleeping()" << std::endl;
}


void CEat::Eating()
{
    std::cout << "CEat::Eating()" << std::endl;
}


void CCode::Coding()
{
    std::cout << "CCode::Coding()" << std::endl;
}


void CWalk::Walking()
{
    std::cout << "CWalk::Walking()" << std::endl;
}


void CWork::Working()
{
    std::cout << "CWork::Working()" << std::endl;
}
