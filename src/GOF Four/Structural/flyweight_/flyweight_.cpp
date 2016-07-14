// flyweight_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "concrete_flyweight.h"
#include "flyweight_factory.h"


//  �ⲿ״̬,��ʱ�Լ򵥵�ö����Ϊ״ֵ̬
enum ExtStates
{
    ES_1,
    ES_2,
    ES_3,
};


//  ���������͵Ķ��󣬸��ݲ�ͬ�ⲿ״̬�����ֲ�һ������ʽ
//  ��������Ϊ��ͬ�����µ��Ҳ�ͬ���ⲿ״̬�µı��治ͬ����,����ؼ����˶������
//  ��ʡ���ڴ濪��
//  ���⣬��ϼ򵥹�������Ƶ�����������ٵĿ���,�Լ���Ϊ���������
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

