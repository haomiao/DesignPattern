#include "stdafx.h"

#include <iostream>
#include "usb_comm.h"


CUsbComm::CUsbComm()
{

}


CUsbComm::~CUsbComm()
{

}


bool CUsbComm::connect()
{
    std::cout << "CUsbComm::connect()" << std::endl;
    return true;
}


unsigned int CUsbComm::read()
{
    std::cout << "CUsbComm::read()" << std::endl;
    return 0;
}


unsigned int CUsbComm::write()
{
    std::cout << "CUsbComm::write()" << std::endl;
    return 0;
}


bool CUsbComm::closed()
{
    std::cout << "CUsbComm::closed()" << std::endl;
    return true;
}
