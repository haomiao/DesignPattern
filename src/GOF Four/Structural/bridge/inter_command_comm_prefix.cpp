#include "stdafx.h"

#include <iostream>
#include "base_comm.h"
#include "inter_command_comm_prefix.h"


CInterCommandCommPrefix::CInterCommandCommPrefix(CBaseComm *pbase_comm) :CBaseInterCommandComm(pbase_comm)
{

}


CInterCommandCommPrefix::~CInterCommandCommPrefix()
{

}


bool CInterCommandCommPrefix::connect()
{
    std::cout << "CInterCommandCommPrefix::connect()" << std::endl;

    if (pbase_comm_ != nullptr)
    {
        return pbase_comm_->connect();
    }
    return false;
}


unsigned int CInterCommandCommPrefix::read()
{
    std::cout << "CInterCommandCommPrefix::read()" << std::endl;
    if ( pbase_comm_ != nullptr )
    {
        unsigned int res = pbase_comm_->read();
        analysisData();
        return res;
    }
    return 0;
}


unsigned int CInterCommandCommPrefix::write()
{
    analysisData();
    std::cout << "CInterCommandCommPrefix::write()" << std::endl;
    if ( pbase_comm_ != nullptr )
    {
        return pbase_comm_->write();
    }
    return 0;
}


bool CInterCommandCommPrefix::closed()
{
    std::cout << "CInterCommandCommPrefix::closed()" << std::endl;
    if ( pbase_comm_ != nullptr )
    {
        return pbase_comm_->closed();
    }
    return true;
}


void CInterCommandCommPrefix::analysisData()
{
    std::cout << "CInterCommandCommPrefix::analysisData(): in read() or write() function " << std::endl;
}

