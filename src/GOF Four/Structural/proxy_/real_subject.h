///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   real_subject.h
/// 	@brief	��ʵ��Ŀ�����. 
/// 
///		��Ҫʵ����ʵ��Ŀ����󣬲�������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  13:52:18
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _REAL_SUBJECT_H_
#define     _REAL_SUBJECT_H_


#include "subject.h"

class CRealSubject : public CSubject
{
public:

    CRealSubject();

    virtual ~CRealSubject();

public:

    virtual void DoSomething();

    virtual void DoOtherthing();
};


#endif  //  _REAL_SUBJECT_H_
