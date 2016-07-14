///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_subject.h
/// 	@brief	Ŀ�����. 
/// 
///		��֧�ֶ��Ŀ�꣬��̳и���ʵ����Ӧ�ӿڼ���  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/22  11:46:16
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_SUBJECT_H_
#define     _BASE_SUBJECT_H_

class CBaseObserver;

class CBaseSubject
{
public:

    virtual ~CBaseSubject();

public:

    virtual void AttachObserver( CBaseObserver *pobserver) = 0;
    
    virtual void DetachObserver( CBaseObserver *pobserver) = 0;

    //  ��ϣ���ɿͻ���ͨ�棬���Ϊpublic

protected:

    virtual void NotifyAll() = 0;

public:

    virtual int  GetChangedData() = 0;

protected:

    CBaseSubject();
};


#endif  //  _BASE_SUBJECT_H_
