///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   adapter_by_object.h
/// 	@brief	�����������ڶ��󣬼�����������ģʽ. 
/// 
///		���ù��м̳�Ŀ��ӿڣ���ά��һ���������߶�������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  11:37:14
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _ADAPTER_BY_OBJECT_H_
#define     _ADAPTER_BY_OBJECT_H_

#include "target.h"
#include "adaptee.h"

//  ����������(Adapter)���ӿ�ͬĿ����ӿ�
//  �ͻ�ʹ�ö����������ӿڼ���
class CAdapterByObject : public CTarget 
{
public:

    //  һ��ͨ����ʼ����ʱ���ʼ�����ڲ����ñ�������
    //  ��ȻҲ�����������ط�����ʼ�����޸ı�������
    CAdapterByObject( CAdaptee * padaptee );

    ~CAdapterByObject();

public:

    //  ��Ҫ������Ľӿ�
    virtual void DoSomethingOthers();

private:

    CAdaptee * padaptee_;
};


#endif  //  _ADAPTER_BY_OBJECT_H_
