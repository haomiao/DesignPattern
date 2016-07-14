#include "stdafx.h"

#include <iostream>
#include "tcp_comm.h"


CTcpComm::CTcpComm()
{

}


CTcpComm::~CTcpComm()
{

}


bool CTcpComm::connect()
{
    std::cout << "CTcpComm::connect()" << std::endl;
    return true;
}


unsigned int CTcpComm::read()
{
    std::cout << "CTcpComm::read()" << std::endl;
    return 0;
}


unsigned int CTcpComm::write()
{
    std::cout << "CTcpComm::write()" << std::endl;
    return 0;
}


bool CTcpComm::closed()
{
    std::cout << "CTcpComm::closed()" << std::endl;
    return true;
}
