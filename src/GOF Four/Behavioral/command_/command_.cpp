// command_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "command.h"
#include "read_reciver.h"
#include "reciver2.h"
#include "read_command.h"
#include "write_command.h"
#include "mac_command.h"

//  ģ�������(Invoker)
void ClientToUseCommand(Command *pcommand)
{
    if ( pcommand != nullptr)
    {
        pcommand->Excute();
    }
}

//  ������ķ����ߺ�ִ������Ľ����߷��룬�Դﵽ����
//  ͨ����������󻯣��������������Ľ�����
//  �ⲿ����ִ�������
int _tmain(int argc, _TCHAR* argv[])
{

    CReadReciver *preciver = new CReadReciver();
    TCommand<CReadReciver> *pcommand = new TCommand<CReadReciver>(preciver, &CReadReciver::Action);
    ClientToUseCommand( pcommand );

    std::cout << std::endl;
    delete pcommand;

    CReadCommand * pread_command = new CReadCommand( preciver );
    ClientToUseCommand( pread_command );

    std::cout << std::endl;
    delete pread_command;
    delete preciver;

    CReciver2 *preciver2 = new CReciver2();
    CWriteCommand *pwrite_command = new CWriteCommand( preciver2 );
    ClientToUseCommand( pwrite_command );

    std::cout << std::endl;
    delete preciver2;
    delete pwrite_command;

    preciver = new CReadReciver();
    preciver2 = new CReciver2();

    pcommand = new TCommand<CReadReciver>( preciver, &CReadReciver::Action );
    pread_command = new CReadCommand( preciver );
    pwrite_command = new CWriteCommand( preciver2 );

    CMacCommand *pmac_command = new CMacCommand();
    pmac_command->AddCommand( pcommand );
    pmac_command->AddCommand( pread_command );
    pmac_command->AddCommand( pwrite_command );

    ClientToUseCommand( pmac_command );
    std::cout << std::endl;
    delete preciver;
    delete preciver2;
    delete pmac_command;

	return 0;
}

