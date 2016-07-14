#include "stdafx.h"

#include <iostream>

#include "base_intercommand_comm.h"
#include "pa_device.h"


CPADevice::CPADevice( CBaseInterCommandComm *pintercommand_comm ):
CBaseDevice(pintercommand_comm)
{

}


CPADevice::~CPADevice()
{

}


bool CPADevice::connect()
{
    std::cout << "CPADevice::connect()" << std::endl;

    if ( pintercommand_comm_ != nullptr )
    {
        return pintercommand_comm_->connect();
    }
    return false;
}


unsigned int CPADevice::read()
{
    std::cout << "CPADevice::read()" << std::endl;
    if ( pintercommand_comm_ != nullptr )
    {
        unsigned int res = pintercommand_comm_->read();
        return res;
    }
    return 0;
}


unsigned int CPADevice::write()
{
    std::cout << "CPADevice::write()" << std::endl;
    if ( pintercommand_comm_ != nullptr )
    {
        return pintercommand_comm_->write();
    }
    return 0;
}


bool CPADevice::closed()
{
    std::cout << "CPADevice::closed()" << std::endl;
    if ( pintercommand_comm_ != nullptr )
    {
        return pintercommand_comm_->closed();
    }
    return true;
}
