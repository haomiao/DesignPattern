///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   target.h
/// 	@brief	客户直接接触的目标类. 
/// 
///		主要提供客户直接接触调用的目标类实现接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  11:29:18
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _TARGET_H_
#define     _TARGET_H_


class CTarget
{
public:

    CTarget();

    ~CTarget();

public:

    //  建议可能需要被适配的接口应使用虚接口；
    //  否则用户使用适配器的时候类型转换是一个问题;
    //  此外还需要进行类型转换等不安全的行为
    //  (因用户或许只知道目标类CTarget而对适配器类不知道或不能兼容).


    virtual void DoSomething();

    virtual void DoSomethingOthers();
};


#endif  //  _TARGET_H_
