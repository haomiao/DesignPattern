///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   ref_singleton.h
/// 	@brief	�����ü����ĵ���ģʽ. 
/// 
///		�ṩ�����ü����Ͳ��������ĵ�������������ģʽʵ��  
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

//  �ӳٵ���
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


//  ��̬�ӳٵ���
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


//  ���ü����ĵ���
class CRefSingleton
{
public:

    static CRefSingleton * GetInstance();

public:

    virtual void DoSomething();

    //  ��ͨ��GetInstance��ȡ�Ķ�����Ҫʹ��ʱ������ReleaseRef
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


//  1. ��Ȼ���������Ӷ��̰߳�ȫ�����磺˫����������Դ������ȫ��
//  2. ����������ģ�巽ʽʵ��,������ʹ�ã�
//  3. �����������ػ����������������Զ�ɾ����������

//  ���ػ������ĵ���
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
* \brief �ٽ�����
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


//  ��ȫ�ӳٵ���
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


//  ����л���ģ����ʽ�ĵ������ݲ�ʵ��

#endif  //  _REF_SINGLETON_H_
