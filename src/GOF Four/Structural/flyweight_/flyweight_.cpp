// flyweight_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "concrete_flyweight.h"
#include "flyweight_factory.h"


//  外部状态,暂时以简单的枚举作为状态值
enum ExtStates
{
    ES_1,
    ES_2,
    ES_3,
};


//  共享几种类型的对象，根据不同外部状态，表现不一样的形式
//  即：不必为不同类型下的且不同的外部状态下的保存不同对象,极大地减少了对象个数
//  节省了内存开销
//  此外，结合简单工厂减少频繁创建、销毁的可能,以及作为缓存的作用
int _tmain(int argc, _TCHAR* argv[])
{
    CFlyweightFactory *pfactory = CFlyweightFactory::GetInstance();
    CFlyweight *pflyweight = pfactory->GetFlyweight( FWT_Type1 );
    pflyweight->DoSomething( ES_1 );
    pflyweight->DoSomething( ES_2 );
    pflyweight->DoSomething( ES_3 );

    std::cout << std::endl;

    pflyweight = pfactory->GetFlyweight( FWT_Type3 );
    pflyweight->DoSomething( ES_1 );
    pflyweight->DoSomething( ES_2 );
    pflyweight->DoSomething( ES_3 );

    std::cout << std::endl;

    pflyweight = pfactory->GetFlyweight( FWT_Type2 );
    pflyweight->DoSomething( ES_1 );
    pflyweight->DoSomething( ES_2 );
    pflyweight->DoSomething( ES_3 );

    std::cout << std::endl;

    pflyweight = pfactory->GetFlyweight( FWT_Type4 );
    pflyweight->DoSomething( ES_1 );
    pflyweight->DoSomething( ES_2 );
    pflyweight->DoSomething( ES_3 );

	return 0;
}

