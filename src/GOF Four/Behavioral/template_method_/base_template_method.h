///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_template_method.h
/// 	@brief	ģ�巽������. 
/// 
///		��Ҫ�ṩ�ⲿʹ�ýӿں����������ʵ��ĳ���㷨������,
//      ���������ʵ���Լ��㷨�������ʵ��  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  16:02:14
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_TEMPLATE_METHOD_H_
#define     _BASE_TEMPLATE_METHOD_H_


//  һ������£����Ӳ���������������ʵ��
//  ԭ������ĳ���������Լ�DoSomething(ģ�巽��)�����ϲ��������ض���ʵ��
//  ģ�巽�����ڸı䲿���㷨��ʵ��
//  ������ģʽ��ͨ��ί�иı������㷨
class CBaseTemplateMethod
{
public:

    virtual ~CBaseTemplateMethod();

public:

    //  ģ�巽��(Ҳ��ָ���ˣ�����ָ�����̡�˳��ִ���㷨��ʵ��)
    void DoSomething();

public:

    //  ���Ӳ���
    virtual void DoSomethingOperator1() = 0;
    virtual void DoSomethingOperator2() = 0;
    virtual void DoSomethingOperator3();

protected:

    //  ԭ�����
    void DoSomethingOriginal();

private:

    //  ����ĳ��������
    void DoSomethingSelf();

protected:

    CBaseTemplateMethod();
};


#endif  //  _BASE_TEMPLATE_METHOD_H_
