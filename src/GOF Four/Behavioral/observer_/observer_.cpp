// observer_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "concrete_subject_a.h"
#include "concrete_observer_a.h"
#include "concrete_observer_b.h"


void ClinetToUseUpdate( CConcreteSubjectA *psubject )
{
    psubject->SetData( 100 );
    psubject->SetData( 200 );
    psubject->SetData( 300 );
    psubject->SetData( 500 );
    std::cout << std::endl;
}


//  观察者模式可以由多种实现方式：
//  如：推模型：将目标更新数据直接推给各个观察者处理
//  拉模型：只是发出有数据更新通告，而观察者决定是否从目标处获取指定相应的感兴趣的数据
//  此外，可以实现多目标方式，即观察者可能对多个目标观察，可能需要引入changemanager的
//  一个类，作为中介者，由他来维护相互交换和通告更新;需要处理的内容比较复杂一些
//  此外数据的更新方式的多样性；外界、目标自身、某个观察者都有可能触发更新;
//  当前示例为：单个目标对象对应多个观察者对象
int _tmain(int argc, _TCHAR* argv[])
{
    CConcreteSubjectA *psubject = new CConcreteSubjectA();

    CConcreteObserverA *pobserverA1 = new CConcreteObserverA( psubject );
    ClinetToUseUpdate( psubject );

    CConcreteObserverA *pobserverA2 = new CConcreteObserverA( psubject );
    ClinetToUseUpdate( psubject );

    CConcreteObserverB *pobserverB1 = new CConcreteObserverB( psubject );
    ClinetToUseUpdate( psubject );

    CConcreteObserverB *pobserverB2 = new CConcreteObserverB( psubject );
    ClinetToUseUpdate( psubject );

    delete pobserverA1;
    delete pobserverA2;
    delete pobserverB1;
    delete pobserverB2;
    delete psubject;

	return 0;
}

