///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   proxy_subject.h
/// 	@brief	�����Ŀ�����. 
/// 
///		��Ҫ������ʵ��Ŀ����󣬲�������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  13:52:18
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PROXY_SUBJECT_H_ 
#define     _PROXY_SUBJECT_H_


#include "subject.h"

//  ����һ�����ڿ��Ʒ��ʡ��ӳټ��ء�Զ�̴��������ӳٿ�������������
//  ��ʵ����ʱ����������Թ�����ʵ����������ڣ�����ʱ��
//  ���������ڴ������ü����ķ�ʽ��
//  ���⣬���Բ���Ҫÿ�����͵�realsubject��Ҫ��һ����Ӧ��proxysubject��
//  ������ܣ�����ʵ��һ���������֧�ֶ����ͬ�����͵�realsubject
//  ����������������һ����Ӳ�,���ܶ�Ч������Ӱ��
class CProxySubject : public CSubject
{
public:

    //  ����ͨ��������������ʵ�Ķ��������
    //  Ҳ����ͨ��������ʽ��������ֱ�Ӵ����ڲ��ʹ�����ά��һ����ʵ���������
    //  Ҳ������һ��������ã�������ֱ�����ã���һ��ID��һ���ļ���ʶ�ȣ�
    //  ����һ��Զ�̵�ַ
    CProxySubject( CSubject *psubject);

    virtual ~CProxySubject();

public:

    //  ����ֻ���Ʒ�����DoSomething()�ӿڣ���������
    //  DoOtherthing(),�Դﵽ������Ʒ��ʵ�Ŀ��(����ˡ�Ȩ�޿��Ƶ�)
    virtual void DoSomething();

    virtual void DoOtherthing();

private:

    //  ��ʵ�����һ������
    CSubject *   preal_subject_;
};


#endif  //  _PROXY_SUBJECT_H_
