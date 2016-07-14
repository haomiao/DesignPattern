///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   component.h
/// 	@brief	�������. 
/// 
///		�ṩ�����Ĺ���ʵ�ֲ����Լ��������������Ĳ����ӿ�  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  15:46:07
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

    //  ��ʵ�ֲ��ֹ���ʵ�֣��Լ�ĳЩĬ�ϲ�����Ϊ
    //  �磺Ҷ�ӽڵ㲻��ʵ�ֲ���������Ľӿ�: AddComponent,RemoveComponent,
    //  GetChildComponent,GetChildSize
    //  ���������ò���Ҷ�ӽڵ�Ľӿ�: DoSomething
    virtual void AddComponent( CComponent * pcomponent );

    virtual bool RemoveComponent( CComponent * pcomponent );

    virtual CComponent * GetChildComponent(unsigned int index);

    virtual unsigned int GetChildSize();

    virtual void DoSomething();

protected:

    CComponent();
};


#endif  //  _COMPONENT_H_

