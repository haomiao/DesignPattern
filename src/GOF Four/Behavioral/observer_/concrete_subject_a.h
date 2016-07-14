///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_subject_a.h
/// 	@brief	����Ŀ��A. 
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

    //  Ŀǰ������SetData�ı�״̬���ݣ������ڲ�����
    //  NotifyAllͨ�����й۲���
    //  ��ȻҲ�����ɿͻ���������ʱͨ�棬���Ըı�ܶ�״̬��
    //  �ֶ�����NotifyAll��ͨ��,������ÿ���ı�״̬�Ľӿ��ڲ�
    //  ��ε���NotifyAll���Խ�ʡ����
    void SetData(int data);

private:

    typedef std::list<CBaseObserver *> ObserverList;
    ObserverList    observer_list_;

    int             data_;
};


#endif  //  _CONCRETE_SUBJECT_A_H_

