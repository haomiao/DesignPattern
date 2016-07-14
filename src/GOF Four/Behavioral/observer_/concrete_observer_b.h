///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_observer_b.h
/// 	@brief	����Ĺ۲���B. 
///   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/22  11:58:39
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_OBSERVER_B_H_
#define     _CONCRETE_OBSERVER_B_H_

#include "base_observer.h"

class CConcreteObserverB : public CBaseObserver
{
public:

    //  ����ʹ�õ��ǳ�����࣬��ζ�Ż�����Ҫ�ṩ����Ľӿ�
    //  ����ȷ��ĳ��Ŀ�����Ȥ����������Ӧ��Ŀ������Ϊ�������ͣ������ǻ�������,
    //  �Լ���Ŀ�����Ľӿ�
    CConcreteObserverB( CBaseSubject *psubject );

    virtual ~CConcreteObserverB();

public:

    virtual void Update( CBaseSubject *psubject );

private:

    CBaseSubject *  psubject_;
};


#endif  //  _CONCRETE_OBSERVER_B_H_
