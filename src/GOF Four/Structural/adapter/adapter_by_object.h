///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   adapter_by_object.h
/// 	@brief	适配器，基于对象，即适配器对象模式. 
/// 
///		采用公有继承目标接口，并维护一个被适配者对象引用  
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

//  对象适配器(Adapter)，接口同目标类接口
//  客户使用对象适配器接口即可
class CAdapterByObject : public CTarget 
{
public:

    //  一般通过初始化的时候初始化其内部引用被适配者
    //  当然也可以在其他地方来初始化或修改被适配者
    CAdapterByObject( CAdaptee * padaptee );

    ~CAdapterByObject();

public:

    //  需要被适配的接口
    virtual void DoSomethingOthers();

private:

    CAdaptee * padaptee_;
};


#endif  //  _ADAPTER_BY_OBJECT_H_
