#include "stdafx.h"

#include <iostream>
#include "proxy_subject.h"


CProxySubject::CProxySubject( CSubject *psubject ) :
preal_subject_( psubject )
{

}


CProxySubject::~CProxySubject()
{

}


void CProxySubject::DoSomething()
{
    std::cout << "In CProxySubject::DoSomething(), invoking the ";
    if ( preal_subject_ != nullptr)
    {
        preal_subject_->DoSomething();
    }
}


void CProxySubject::DoOtherthing()
{
    //  ��������ʵ�ǰ�ӿڣ�����ת���������ʵ��Ŀ�����
    std::cout << "In CProxySubject::DoOtherthing(), invoking the real_subject is rejected!" << std::endl;
}
