///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_facade.h
/// 	@brief	外观基类. 
/// 
///	    提供外部客户使用的部分公共接口，便于隐藏子系统细节，提供统一访问方式  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  8:59:56
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_FACADE_H_
#define     _BASE_FACADE_H_


//  外观基类，事实上有时候只需要一个外观类即可,常常结合使用单例模式；
//  当然，为了减少频繁修改外观接口，可考虑使用不同的外观,
//  各自管理需要用到的子系统中的类
class CBaseFacade
{
public:

    virtual ~CBaseFacade();

public:

    //  以下定义不同的功能实现，模拟不同客户使用不同的子系统功能
    virtual void DoOneThing();
    virtual void DoSomeThing();
    virtual void DoOtherThing();

protected:

    CBaseFacade();
};



#endif  //  _BASE_FACADE_H_
