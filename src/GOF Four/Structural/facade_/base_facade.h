///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_facade.h
/// 	@brief	��ۻ���. 
/// 
///	    �ṩ�ⲿ�ͻ�ʹ�õĲ��ֹ����ӿڣ�����������ϵͳϸ�ڣ��ṩͳһ���ʷ�ʽ  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  8:59:56
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_FACADE_H_
#define     _BASE_FACADE_H_


//  ��ۻ��࣬��ʵ����ʱ��ֻ��Ҫһ������༴��,�������ʹ�õ���ģʽ��
//  ��Ȼ��Ϊ�˼���Ƶ���޸���۽ӿڣ��ɿ���ʹ�ò�ͬ�����,
//  ���Թ�����Ҫ�õ�����ϵͳ�е���
class CBaseFacade
{
public:

    virtual ~CBaseFacade();

public:

    //  ���¶��岻ͬ�Ĺ���ʵ�֣�ģ�ⲻͬ�ͻ�ʹ�ò�ͬ����ϵͳ����
    virtual void DoOneThing();
    virtual void DoSomeThing();
    virtual void DoOtherThing();

protected:

    CBaseFacade();
};



#endif  //  _BASE_FACADE_H_
