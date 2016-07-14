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
    //  不允许访问当前接口，即不转发请求给真实的目标对象
    std::cout << "In CProxySubject::DoOtherthing(), invoking the real_subject is rejected!" << std::endl;
}
