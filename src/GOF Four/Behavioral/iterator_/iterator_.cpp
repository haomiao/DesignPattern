// iterator_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "concrete_aggregate_1.h"


//  示例迭代器为外部迭代器,可以针对同一容器灵活定制不同的迭代器
int _tmain(int argc, _TCHAR* argv[])
{

    ConcreteAggregate1<int> *paggregate = new ConcreteAggregate1<int>();
    paggregate->PushBack( 101 );
    paggregate->PushBack( 616 );
    paggregate->PushBack( 231 );
    paggregate->PushBack( 290 );
    Iterator<int> *piter = paggregate->CreateIterator();
    int index = 0;
    for ( piter->First(); !piter->IsDone(); piter->Next() )
    {
        ++index;
        std::cout << "Item" << index << ": " << piter->GetCurrentItem() << std::endl;
    }

    std::cout << std::endl;

    index = 0;
    for ( piter->First(); !piter->IsDone(); ( *piter )++/*++(*piter)*//*piter->operator++()*/ )
    {
        ++index;
        std::cout << "Item" << index << ": " << piter->GetCurrentItem() << std::endl;
    }

    std::cout << std::endl;
    delete piter;

    piter = paggregate->CreateReversalIterator();
    index = paggregate->GetCount();
    for ( piter->First(); !piter->IsDone(); ( *piter )++/*piter->Next()*/ )
    {
        std::cout << "Item" << index << ": " << piter->GetCurrentItem() << std::endl;
        --index;
    }

    std::cout << std::endl;
    delete piter;

    delete paggregate;

    ConcreteAggregate1<int> *paggregate2 = new ConcreteAggregate1<int>();
    piter = paggregate2->CreateIterator();
    index = 0;
    for ( piter->First(); !piter->IsDone(); piter->Next() )
    {
        ++index;
        std::cout << "Item" << index << ": " << piter->GetCurrentItem() << std::endl;
    }

    std::cout << std::endl;
    delete piter;

    piter = paggregate2->CreateReversalIterator();
    index = paggregate->GetCount();
    for ( piter->First(); !piter->IsDone(); ( *piter )++/*piter->Next()*/ )
    {
        std::cout << "Item" << index << ": " << piter->GetCurrentItem() << std::endl;
        --index;
    }

    std::cout << std::endl;
    delete piter;

    delete paggregate2;
	return 0;
}

