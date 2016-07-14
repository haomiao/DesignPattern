///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_subject_a.h
/// 	@brief	具体目标A. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/22  11:50:48
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_SUBJECT_A_H_
#define     _CONCRETE_SUBJECT_A_H_

#include <list>
#include "base_subject.h"

class CBaseObserver;

class CConcreteSubjectA : public CBaseSubject
{
public:

    CConcreteSubjectA();

    virtual ~CConcreteSubjectA();

public:

    virtual void AttachObserver( CBaseObserver *pobserver );

    virtual void DetachObserver( CBaseObserver *pobserver );

protected:

    virtual void NotifyAll();

public:

    virtual int  GetChangedData();

    //  目前采用由SetData改变状态内容，而其内部调用
    //  NotifyAll通告所有观察者
    //  当然也可以由客户来决定何时通告，可以改变很多状态后
    //  手动调用NotifyAll来通告,而不是每个改变状态的接口内部
    //  多次调用NotifyAll；以节省开销
    void SetData(int data);

private:

    typedef std::list<CBaseObserver *> ObserverList;
    ObserverList    observer_list_;

    int             data_;
};


#endif  //  _CONCRETE_SUBJECT_A_H_

