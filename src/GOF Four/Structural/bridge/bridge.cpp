// bridge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "tcp_comm.h"
#include "usb_comm.h"

#include "inter_command_comm_prefix.h"
#include "inter_command_comm_fixedsize.h"

#include "pa_device.h"
#include "pm_device.h"


void DeviceOperators( CBaseDevice *pbase_device )
{
    if (pbase_device != nullptr)
    {
        pbase_device->connect();
        pbase_device->write();
        pbase_device->read();
        pbase_device->closed();
    }
}


//  三个维度的自由变化，底层通信方式，中间层数据处理方式，以及上层不同设备类型
//  桥接模式，即分离抽象和实现，可分别独自变化，动态调整实现部分的方式
//  此外，也可不通过构造函数初始化所引用的对象，可以通过其他方式修改或初始化
//  例如其他的接口或参数化方式，结合工厂模式，可更进一步隐藏更多的细节,这样
//  pbase_device将对任何依赖引用对象均可不知道就可以直接方便使用了 
int _tmain(int argc, _TCHAR* argv[])
{
    CBaseComm *pbase_comm = new CTcpComm();
    CBaseInterCommandComm *pbase_intercommand_comm = new CInterCommandCommPrefix( pbase_comm );
    CBaseDevice *pbase_device = new CPADevice( pbase_intercommand_comm );

    DeviceOperators( pbase_device );
    delete pbase_comm;
    delete pbase_intercommand_comm;
    delete pbase_device;

    pbase_comm = new CUsbComm();
    pbase_intercommand_comm = new CInterCommandCommFixedSize( pbase_comm );
    pbase_device = new CPMDevice( pbase_intercommand_comm );

    DeviceOperators( pbase_device );
    delete pbase_intercommand_comm;
    delete pbase_device;

    pbase_intercommand_comm = new CInterCommandCommPrefix( pbase_comm );
    pbase_device = new CPADevice( pbase_intercommand_comm );

    DeviceOperators( pbase_device );
    delete pbase_comm;
    delete pbase_intercommand_comm;
    delete pbase_device;

	return 0;
}

