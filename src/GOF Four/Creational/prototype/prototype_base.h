///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   prototype_base.h
/// 	@brief	原型基类. 
/// 
///		主要提供原型基类公共接口和部分实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  17:26:38
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PROTOTYPE_BASE_H_
#define     _PROTOTYPE_BASE_H_

//  原型子类枚举
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

    //  重要的克隆操作(注意深拷贝问题!)
    virtual CPrototypeBase * Clone() = 0;

    //  克隆后，可能根据客户需要调用该初始化参数或某些设置
    virtual void Initializetion( void *pParam1, void *pParam2 );

    virtual void DoSomething();
};


#endif  //  _PROTOTYPE_BASE_H_
