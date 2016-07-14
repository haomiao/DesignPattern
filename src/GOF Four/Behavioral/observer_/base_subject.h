///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_subject.h
/// 	@brief	目标基类. 
/// 
///		若支持多个目标，则继承该类实现相应接口即可  
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

    //  若希望由客户来通告，则可为public

protected:

    virtual void NotifyAll() = 0;

public:

    virtual int  GetChangedData() = 0;

protected:

    CBaseSubject();
};


#endif  //  _BASE_SUBJECT_H_
