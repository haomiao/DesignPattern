///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   request.h
/// 	@brief	�����������. 
/// 
///		ͨ����װ����Ϊ���󣬱��ڶԸ��ֲ����Ĵ��ݺʹ���,�������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  16:04:27
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _REQUEST_H_
#define     _REQUEST_H_

#include <string>

//  ģ����������
enum HandleRequestType
{
    HRT_NO          = 0,
    HRT_READ        = 1,
    HRT_WRITE       = 2,
    HRT_READ_WRITE  = 4,
    HRT_EXTEND      = 8,     //  �������ӵ���������
};


//  �������ݲ����ṹ
struct CombinStruct 
{
    int     data1_;
    float   data2_;
    std::string  data3_;

    CombinStruct(int data1, float data2, std::string data3):
        data1_(data1),
        data2_(data2),
        data3_(data3)
    {

    }
};


//  ������
class CRequest
{
public:

    //  ������Ͳ���
    //  �����������Ͳ����ӡ�������Ҫ˫����ͬԼ��
    CRequest(int request_code, void *params);

    virtual ~CRequest();

public:

    //  ��ʱֻ�ṩ��ȡ������Ͳ����Ľӿ�
    int GetRequestCode();

    void * GetParams();

private:

    //  �����룬�¼�����������
    int         request_code_;
    void *      params_;
};


#endif  //  _REQUEST_H_
