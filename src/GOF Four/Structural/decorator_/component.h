///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   component.h
/// 	@brief	��������ṩ��Ҫ�ĳ���ӿںͲ���ʵ��. 
///   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  17:39:10
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _COMPONENT_H_
#define     _COMPONENT_H_


class CComponent
{
public:

    virtual ~CComponent();

public:

    virtual void DoSomething() = 0;

protected:

    CComponent();
};


#endif  //  _COMPONENT_H_

