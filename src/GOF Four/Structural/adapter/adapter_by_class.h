///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   adapter_by_class.h
/// 	@brief	适配器，基于类继承，即适配器类模式. 
/// 
///		采用公有继承目标接口以及私有继承被适配者接口实现  
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

//  类适配器(Adapter)，接口同目标类接口
//  客户使用类适配器接口即可
class CAdapterByClass : public CTarget, private CAdaptee
{
public:

    CAdapterByClass();

    ~CAdapterByClass();

public:

    //  需要被适配的接口
    virtual void DoSomethingOthers();

};


#endif  //  _ADAPTER_BY_CLASS_H_
