///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   adapter_by_class.h
/// 	@brief	��������������̳У�����������ģʽ. 
/// 
///		���ù��м̳�Ŀ��ӿ��Լ�˽�м̳б������߽ӿ�ʵ��  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  11:37:14
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _ADAPTER_BY_CLASS_H_
#define     _ADAPTER_BY_CLASS_H_

#include "target.h"
#include "adaptee.h"

//  ��������(Adapter)���ӿ�ͬĿ����ӿ�
//  �ͻ�ʹ�����������ӿڼ���
class CAdapterByClass : public CTarget, private CAdaptee
{
public:

    CAdapterByClass();

    ~CAdapterByClass();

public:

    //  ��Ҫ������Ľӿ�
    virtual void DoSomethingOthers();

};


#endif  //  _ADAPTER_BY_CLASS_H_
