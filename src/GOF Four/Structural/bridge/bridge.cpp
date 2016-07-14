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


//  ����ά�ȵ����ɱ仯���ײ�ͨ�ŷ�ʽ���м�����ݴ���ʽ���Լ��ϲ㲻ͬ�豸����
//  �Ž�ģʽ������������ʵ�֣��ɷֱ���Ա仯����̬����ʵ�ֲ��ֵķ�ʽ
//  ���⣬Ҳ�ɲ�ͨ�����캯����ʼ�������õĶ��󣬿���ͨ��������ʽ�޸Ļ��ʼ��
//  ���������Ľӿڻ��������ʽ����Ϲ���ģʽ���ɸ���һ�����ظ����ϸ��,����
//  pbase_device�����κ��������ö�����ɲ�֪���Ϳ���ֱ�ӷ���ʹ���� 
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

