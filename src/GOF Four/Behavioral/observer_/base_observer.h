///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_observer.h
/// 	@brief	�۲��߻���. 
/// 
///		���������������ⲿ���ýӿ�  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/22  11:55:48
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_OBSERVER_H_
#define     _BASE_OBSERVER_H_

class CBaseSubject;

class CBaseObserver
{
public:

    virtual ~CBaseObserver();

public:

    virtual void Update( CBaseSubject *psubject) = 0;

protected:

    CBaseObserver();
};


#endif  //  _BASE_OBSERVER_H_
