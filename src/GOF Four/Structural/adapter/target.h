///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   target.h
/// 	@brief	�ͻ�ֱ�ӽӴ���Ŀ����. 
/// 
///		��Ҫ�ṩ�ͻ�ֱ�ӽӴ����õ�Ŀ����ʵ�ֽӿ�  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  11:29:18
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _TARGET_H_
#define     _TARGET_H_


class CTarget
{
public:

    CTarget();

    ~CTarget();

public:

    //  ���������Ҫ������Ľӿ�Ӧʹ����ӿڣ�
    //  �����û�ʹ����������ʱ������ת����һ������;
    //  ���⻹��Ҫ��������ת���Ȳ���ȫ����Ϊ
    //  (���û�����ֻ֪��Ŀ����CTarget�����������಻֪�����ܼ���).


    virtual void DoSomething();

    virtual void DoSomethingOthers();
};


#endif  //  _TARGET_H_
