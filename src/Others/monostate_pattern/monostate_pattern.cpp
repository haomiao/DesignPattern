// monostate_pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "monostate.h"

/** ��̬ģʽ 
    (��Ե���ģʽ��ע���ǽṹ������ע������Ϊ��)
    (����ֻ����һ��ʵ��)
    (��̬�����ж��ʵ������������ʵ��״̬һ��,����Ҳ���Լ̳У�������ض���ʵ��)
*/ 


int _tmain(int argc, _TCHAR* argv[])
{
    Monostate *monostate1 = new Monostate();
    Monostate *monostate2 = new Monostate();
    
    monostate1->SetNum(100);
    unsigned int num = monostate2->GetNum();
    cout << num <<endl;
    cout << endl;

    monostate2->SetNum(101);
    num = monostate1->GetNum();
    cout << num <<endl;
    cout << endl;

    delete monostate1;  //  ����ɾ����񣬲�Ӱ��״̬

    monostate2->SetNum(111);
    num = monostate1->GetNum();
    cout << num <<endl;

    delete monostate2;

	return 0;   
}

