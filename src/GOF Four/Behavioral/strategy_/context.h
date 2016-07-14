///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   context.h
/// 	@brief	��������. 
/// 
///		��Ҫ�õ��������ṩ�Ĳ���,��������Ӧ��������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  15:04:53
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONTEXT_H_
#define     _CONTEXT_H_

#include "base_strategy.h"


class CContext
{
public:

    CContext();

    ~CContext();

public:

    void SetStrategyObj( CBaseStrategy   *pstrategy );

    void DoSomeThing();

private:

    CBaseStrategy   *pstrategy_;
};


#endif  //  _CONTEXT_H_

