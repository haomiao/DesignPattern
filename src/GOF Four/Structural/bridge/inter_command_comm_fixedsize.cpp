#include "stdafx.h"

#include <iostream>
#include "base_comm.h"
#include "inter_command_comm_fixedsize.h"


CInterCommandCommFixedSize::CInterCommandCommFixedSize(CBaseComm *pbase_comm) : CBaseInterCommandComm(pbase_comm)
{

}


CInterCommandCommFixedSize::~CInterCommandCommFixedSize()
{

}


bool CInterCommandCommFixedSize::connect()
{
    std::cout << "CInterCommandCommFixedSize::connect()" << std::endl;

    if (pbase_comm_ != nullptr)
    {
        return pbase_comm_->connect();
    }
    return false;
}


unsigned int CInterCommandCommFixedSize::read()
{
    std::cout << "CInterCommandCommFixedSize::read()" << std::endl;
    if ( pbase_comm_ != nullptr )
    {
        unsigned int res = pbase_comm_->read();
        analysisData();
        return res;
    }
    return 0;
}


unsigned int CInterCommandCommFixedSize::write()
{
    analysisData();
    std::cout << "CInterCommandCommFixedSize::write()" << std::endl;
    if ( pbase_comm_ != nullptr )
    {
        return pbase_comm_->write();
    }
    return 0;
}


bool CInterCommandCommFixedSize::closed()
{
    std::cout << "CInterCommandCommFixedSize::closed()" << std::endl;
    if ( pbase_comm_ != nullptr )
    {
        return pbase_comm_->closed();
    }
    return true;
}


void CInterCommandCommFixedSize::analysisData()
{
    std::cout << "CInterCommandCommFixedSize::analysisData(): in read() or write() function " << std::endl;
}

