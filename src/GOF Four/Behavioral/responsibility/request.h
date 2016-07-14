///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   request.h
/// 	@brief	请求参数对象. 
/// 
///		通过封装参数为对象，便于对各种参数的传递和处理,更加灵活  
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

//  模拟请求类型
enum HandleRequestType
{
    HRT_NO          = 0,
    HRT_READ        = 1,
    HRT_WRITE       = 2,
    HRT_READ_WRITE  = 4,
    HRT_EXTEND      = 8,     //  额外增加的请求类型
};


//  复合数据参数结构
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


//  请求类
class CRequest
{
public:

    //  请求码和参数
    //  具体的请求码和参数加、解码需要双方共同约定
    CRequest(int request_code, void *params);

    virtual ~CRequest();

public:

    //  暂时只提供获取请求码和参数的接口
    int GetRequestCode();

    void * GetParams();

private:

    //  请求码，事件或请求类型
    int         request_code_;
    void *      params_;
};


#endif  //  _REQUEST_H_
