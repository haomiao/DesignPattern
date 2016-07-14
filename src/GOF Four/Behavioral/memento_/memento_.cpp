// memento_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "originator.h"
#include "caretaker.h"

#define RAND_NUM_COUTS 10

void ClientToStoreMemento( Originator *poriginator, Caretaker *pcaretaker )
{
    if ( poriginator != nullptr && pcaretaker != nullptr)
    {
        for ( unsigned int index = 0; index < RAND_NUM_COUTS; ++index )
        {
            poriginator->SetNum( rand() % 200 );
            poriginator->SetFloat( (rand() % 1000) * 10.0f );
            poriginator->PrintOutStates();
            std::cout << std::endl;
            pcaretaker->PushMemento( poriginator->GetMemento() );
        }
    }
}


void ClientToReStoreMemento( Originator *poriginator, Caretaker *pcaretaker )
{
    if ( poriginator != nullptr && pcaretaker != nullptr )
    {
        for ( unsigned int index = 0; index < RAND_NUM_COUTS; ++index )
        {
            poriginator->RestoreMemento( pcaretaker->TopMemento() );
            pcaretaker->PopMemento();
            poriginator->PrintOutStates();
            std::cout << std::endl;
        }
    }
}


int _tmain(int argc, _TCHAR* argv[])
{
    srand( (unsigned)time( NULL ) );

    Originator *poriginator = new Originator();
    poriginator->SetNum( 110 );
    poriginator->SetFloat( 12.345f );
    poriginator->SetStr( "haomiao_1" );
    poriginator->PrintOutStates();
    std::cout << std::endl;

    //  依次保存备忘录
    Caretaker *pcaretaker = new Caretaker();
    pcaretaker->PushMemento( poriginator->GetMemento() );

    poriginator->SetNum( 420 );
    poriginator->SetFloat( 112.39f );
    poriginator->SetStr( "haomiao_2" );
    poriginator->PrintOutStates();
    std::cout << std::endl;

    pcaretaker->PushMemento( poriginator->GetMemento() );

    //  依次恢复
    poriginator->RestoreMemento( pcaretaker->TopMemento() );
    pcaretaker->PopMemento();
    poriginator->PrintOutStates();
    std::cout << std::endl;

    poriginator->RestoreMemento( pcaretaker->TopMemento() );
    pcaretaker->PopMemento();
    poriginator->PrintOutStates();
    std::cout << std::endl;

    //  无限制保存和恢复
    ClientToStoreMemento( poriginator, pcaretaker );
    ClientToReStoreMemento( poriginator, pcaretaker );

    delete poriginator;
    delete pcaretaker;

	return 0;
}

