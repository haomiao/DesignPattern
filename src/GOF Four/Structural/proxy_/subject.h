///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   subject.h
/// 	@brief	Ŀ�����. 
/// 
///		��Ҫ�ṩ����û�ʹ�õĹ����ӿںͲ���ʵ��  
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

    //  �ⲿ���õĽӿڣ������Ǳ�����Ľӿ�
    virtual void DoSomething();

    virtual void DoOtherthing();

protected:

    CSubject();
};



#endif  //  _SUBJECT_H_
