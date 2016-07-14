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


//  �۲���ģʽ�����ɶ���ʵ�ַ�ʽ��
//  �磺��ģ�ͣ���Ŀ���������ֱ���Ƹ������۲��ߴ���
//  ��ģ�ͣ�ֻ�Ƿ��������ݸ���ͨ�棬���۲��߾����Ƿ��Ŀ�괦��ȡָ����Ӧ�ĸ���Ȥ������
//  ���⣬����ʵ�ֶ�Ŀ�귽ʽ�����۲��߿��ܶԶ��Ŀ��۲죬������Ҫ����changemanager��
//  һ���࣬��Ϊ�н��ߣ�������ά���໥������ͨ�����;��Ҫ��������ݱȽϸ���һЩ
//  �������ݵĸ��·�ʽ�Ķ����ԣ���硢Ŀ������ĳ���۲��߶��п��ܴ�������;
//  ��ǰʾ��Ϊ������Ŀ������Ӧ����۲��߶���
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

