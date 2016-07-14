///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_strategy.h
/// 	@brief	���Ի���. 
/// 
///		�ṩ�ⲿ���ò�ͬ����ʱ�ɷ��ʵĹ����ӿڻ�ʵ��  
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
