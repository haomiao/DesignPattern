///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   reciver.h
/// 	@brief	�����߻���,���ԶԹ������ƵĽ����߽��й�����չ���޸�. 
///   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  18:22:58
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _RECIVER_H_
#define     _RECIVER_H_


//  ע�⣺�����߲�һ����Ҫ�̳���CReciver�࣬�κ��඼������Ϊ������
//  ֻ��Ҫ��Ӧ�����ദ�����õĽ����߶��󼴿�
class CReciver
{
public:
   
    virtual ~CReciver();
    
public:

    //  ������ִ�еĶ���������ͨ��������󴫵ݲ���
    virtual void Action() = 0;

    virtual void Action2(void *params);

protected:

    CReciver();
};


#endif  //  _RECIVER_H_
