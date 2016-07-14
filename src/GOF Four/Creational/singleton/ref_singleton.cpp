#include "stdafx.h"

#include "ref_singleton.h"


CSingleton *  CSingleton::psingleton_ = nullptr;

CSingleton::CSingleton()
{

}


CSingleton::~CSingleton()
{

}


CSingleton * CSingleton::GetInstance()
{
    if ( psingleton_ == nullptr )
    {
        psingleton_ = new CSingleton();
    }

    return psingleton_;
}


void CSingleton::Destory()
{
    if (psingleton_ != nullptr)
    {
        delete psingleton_;
        psingleton_ = nullptr;
    }
}


void CSingleton::DoSomething()
{
    std::cout << "CSingleton::DoSomething()" << std::endl;
}


CStaticSingleton::CStaticSingleton()
{

}


CStaticSingleton::~CStaticSingleton()
{

}


CStaticSingleton * CStaticSingleton::GetInstance()
{
    static CStaticSingleton static_singleton;
    return &static_singleton;
}


void CStaticSingleton::DoSomething()
{
    std::cout << "CStaticSingleton::DoSomething()" << std::endl;
}


CRefSingleton *  CRefSingleton::pref_singleton_ = nullptr;

CRefSingleton::CRefSingleton() :ref_counts_(0)
{

}


CRefSingleton::~CRefSingleton()
{

}


CRefSingleton * CRefSingleton::GetInstance()
{
    if ( pref_singleton_ == nullptr )
    {
        pref_singleton_ = new CRefSingleton();
    }

    pref_singleton_->AddRef();
    return pref_singleton_;
}


void CRefSingleton::AddRef()
{
    InterlockedAdd64( &ref_counts_, 1 );
}


void CRefSingleton::ReleaseRef()
{
    InterlockedDecrement64( &ref_counts_ );
    if (ref_counts_ == 0)
    {
        delete this;
        pref_singleton_ = nullptr;
    }
}


void CRefSingleton::DoSomething()
{
    std::cout << "CRefSingleton::DoSomething()" << std::endl;
}



CGuardSingleton *  CGuardSingleton::pguard_singleton_ = nullptr;
CGuardSingleton::CDummyClass CGuardSingleton::dummy_calss_;

CGuardSingleton::CGuardSingleton()
{

}


CGuardSingleton::~CGuardSingleton()
{

}


CGuardSingleton * CGuardSingleton::GetInstance()
{
    if ( pguard_singleton_ == nullptr )
    {
        pguard_singleton_ = new CGuardSingleton();
    }

    return pguard_singleton_;
}


void CGuardSingleton::DoSomething()
{
    std::cout << "CGuardSingleton::DoSomething()" << std::endl;
}


CGuardSingleton::CDummyClass::CDummyClass()
{

}


CGuardSingleton::CDummyClass::~CDummyClass()
{
    if ( pguard_singleton_ != nullptr )
    {
        delete pguard_singleton_;
        pguard_singleton_ = nullptr;
    }
}


CCriticalSectionLock::CCriticalSectionLock()
{
    ::InitializeCriticalSection( &critical_section_ );
}


CCriticalSectionLock::CCriticalSectionLock( DWORD spinCount )
{
    ::InitializeCriticalSectionAndSpinCount( &critical_section_, spinCount );
}


CCriticalSectionLock::~CCriticalSectionLock()
{
    ::DeleteCriticalSection( &critical_section_ );
}


void CCriticalSectionLock::Lock()
{
    EnterCriticalSection( &critical_section_ );
}


void CCriticalSectionLock::UnLock()
{
    LeaveCriticalSection( &critical_section_ );
}


BOOL CCriticalSectionLock::TryLock()
{
    return ::TryEnterCriticalSection( &critical_section_ );
}


DWORD CCriticalSectionLock::SetSpinCount( DWORD dwSpinCount )
{
    return ::SetCriticalSectionSpinCount( &critical_section_, dwSpinCount );
}


AutoLock::AutoLock( CCriticalSectionLock &lock )
    :m_lock( lock )
{
    m_lock.Lock();
}


AutoLock::~AutoLock()
{
    m_lock.UnLock();
}


CSafeSingleton *  volatile CSafeSingleton::psafe_singleton_ = nullptr;
CCriticalSectionLock CSafeSingleton::safe_lock_;
CSafeSingleton::CDummyClass CSafeSingleton::dummy_calss_;

CSafeSingleton::CSafeSingleton()
{

}


CSafeSingleton::~CSafeSingleton()
{

}


CSafeSingleton * CSafeSingleton::GetInstance()
{
    if ( psafe_singleton_ == nullptr )
    {
        AutoLock lock( safe_lock_ );
        if (psafe_singleton_ == nullptr)
        {
            psafe_singleton_ = new CSafeSingleton();
        }
    }

    return psafe_singleton_;
}



void CSafeSingleton::DoSomething()
{
    std::cout << "CSafeSingleton::DoSomething()" << std::endl;
}


CSafeSingleton::CDummyClass::CDummyClass()
{

}


CSafeSingleton::CDummyClass::~CDummyClass()
{
    if ( psafe_singleton_ != nullptr )
    {
        delete psafe_singleton_;
        psafe_singleton_ = nullptr;
    }
}

