#include "stdafx.h"

#include <iostream>

#include "base_intercommand_comm.h"
#include "pm_device.h"


CPMDevice::CPMDevice( CBaseInterCommandComm *pintercommand_comm ) :
CBaseDevice(pintercommand_comm)
{

}


CPMDevice::~CPMDevice()
{

}


bool CPMDevice::connect()
{
    std::cout << "CPMDevice::connect()" << std::endl;

    if ( pintercommand_comm_ != nullptr )
    {
        return pintercommand_comm_->connect();
    }
    return false;
}


unsigned int CPMDevice::read()
{
    std::cout << "CPMDevice::read()" << std::endl;
    if ( pintercommand_comm_ != nullptr )
    {
        unsigned int res = pintercommand_comm_->read();
        return res;
    }
    return 0;
}


unsigned int CPMDevice::write()
{
    std::cout << "CPMDevice::write()" << std::endl;
    if ( pintercommand_comm_ != nullptr )
    {
        return pintercommand_comm_->write();
    }
    return 0;
}


bool CPMDevice::closed()
{
    std::cout << "CPMDevice::closed()" << std::endl;
    if ( pintercommand_comm_ != nullptr )
    {
        return pintercommand_comm_->closed();
    }
    return true;
}
