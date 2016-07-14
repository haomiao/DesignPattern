///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   reciver.h
/// 	@brief	接收者基类,可以对功能类似的接收者进行功能扩展或修改. 
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


//  注意：接收者不一定需要继承与CReciver类，任何类都可以作为接收类
//  只需要相应命令类处理引用的接收者对象即可
class CReciver
{
public:
   
    virtual ~CReciver();
    
public:

    //  接收者执行的动作，可以通过命令对象传递参数
    virtual void Action() = 0;

    virtual void Action2(void *params);

protected:

    CReciver();
};


#endif  //  _RECIVER_H_
