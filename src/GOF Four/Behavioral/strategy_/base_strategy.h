///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_strategy.h
/// 	@brief	策略基类. 
/// 
///		提供外部调用不同策略时可访问的公共接口或实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  14:57:19
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_STRATEGY_H_
#define     _BASE_STRATEGY_H_


class CBaseStrategy
{
public:

    virtual ~CBaseStrategy();

public:

    virtual void DoSomeAlgorithm() = 0;

protected:

    CBaseStrategy();
};


#endif  //  _BASE_STRATEGY_H_
