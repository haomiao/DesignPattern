///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   subject.h
/// 	@brief	目标基类. 
/// 
///		主要提供外界用户使用的公共接口和部分实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  13:49:51
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _SUBJECT_H_
#define     _SUBJECT_H_


class CSubject
{
public:

    virtual ~CSubject();

public:

    //  外部调用的接口，可能是被代理的接口
    virtual void DoSomething();

    virtual void DoOtherthing();

protected:

    CSubject();
};



#endif  //  _SUBJECT_H_
