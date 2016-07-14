///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   prototype_base.h
/// 	@brief	ԭ�ͻ���. 
/// 
///		��Ҫ�ṩԭ�ͻ��๫���ӿںͲ���ʵ��  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  17:26:38
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PROTOTYPE_BASE_H_
#define     _PROTOTYPE_BASE_H_

//  ԭ������ö��
enum PrototypeType
{
    PTT_PROTOTYPE_A,
    PTT_PROTOTYPE_B,
};


class CPrototypeBase
{
public:

    CPrototypeBase();

    virtual ~CPrototypeBase();

public:

    //  ��Ҫ�Ŀ�¡����(ע���������!)
    virtual CPrototypeBase * Clone() = 0;

    //  ��¡�󣬿��ܸ��ݿͻ���Ҫ���øó�ʼ��������ĳЩ����
    virtual void Initializetion( void *pParam1, void *pParam2 );

    virtual void DoSomething();
};


#endif  //  _PROTOTYPE_BASE_H_
