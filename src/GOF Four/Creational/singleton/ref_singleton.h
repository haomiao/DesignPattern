///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   ref_singleton.h
/// 	@brief	带引用计数的单例模式. 
/// 
///		提供带引用计数和不带计数的单例或其他单例模式实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  8:39:25
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _REF_SINGLETON_H_
#define     _REF_SINGLETON_H_

#include <iostream>
#include <windows.h>

//  延迟单例
class CSingleton
{
public:

    static CSingleton * GetInstance();

public:

    virtual void DoSomething();

    void Destory();

protected:

    CSingleton();

    virtual ~CSingleton();

private:

    static CSingleton *  psingleton_;
};


//  静态延迟单例
class CStaticSingleton
{
public:

    static CStaticSingleton * GetInstance();

public:

    virtual void DoSomething();

protected:

    CStaticSingleton();

    virtual ~CStaticSingleton();
};


//  引用计数的单例
class CRefSingleton
{
public:

    static CRefSingleton * GetInstance();

public:

    virtual void DoSomething();

    //  当通过GetInstance获取的对象不需要使用时，调用ReleaseRef
    void ReleaseRef();

private:

    void AddRef();

protected:

    CRefSingleton();

    virtual ~CRefSingleton();

private:

    static CRefSingleton *      pref_singleton_;
    volatile LONGLONG           ref_counts_;
};


//  1. 当然还可以增加多线程安全机制如：双锁，保护资源，更安全；
//  2. 还可以增加模板方式实现,更方便使用；
//  3. 还可以增加守护变量，这样可以自动删除单例对象。

//  带守护变量的单例
class CGuardSingleton
{
public:

    static CGuardSingleton * GetInstance();

public:

    virtual void DoSomething();

protected:

    CGuardSingleton();

    virtual ~CGuardSingleton();

private:

    class CDummyClass
    {
    public:

        CDummyClass();

        ~CDummyClass();
    };

private:

    static CGuardSingleton *  pguard_singleton_;
    static CDummyClass        dummy_calss_;
};


/**
* \brief 临界区锁
*/
class CCriticalSectionLock
{
public:

    CCriticalSectionLock();

    CCriticalSectionLock( DWORD spinCount );

    virtual ~CCriticalSectionLock();

    virtual void Lock();

    virtual void UnLock();

    BOOL TryLock();

    DWORD SetSpinCount( DWORD dwSpinCount );

private:

    CCriticalSectionLock( const CCriticalSectionLock& );
    CCriticalSectionLock & operator = ( const CCriticalSectionLock & );

private:

    CRITICAL_SECTION  critical_section_;
};


class AutoLock
{
public:

    AutoLock( CCriticalSectionLock &lock );

    ~AutoLock();

private:

    CCriticalSectionLock &m_lock;
};


//  安全延迟单例
class CSafeSingleton
{
public:

    static CSafeSingleton * GetInstance();

public:

    virtual void DoSomething();

protected:

    CSafeSingleton();

    virtual ~CSafeSingleton();

private:

    class CDummyClass
    {
    public:

        CDummyClass();

        ~CDummyClass();
    };

private:

    static CSafeSingleton * volatile        psafe_singleton_;
    static CDummyClass                      dummy_calss_;
    static CCriticalSectionLock             safe_lock_;
};


//  最后还有基于模板形式的单例，暂不实现

#endif  //  _REF_SINGLETON_H_
