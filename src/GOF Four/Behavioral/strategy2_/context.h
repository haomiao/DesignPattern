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

template<typename TStrategy>
class CContext
{
public:

    CContext();

    ~CContext();

public:

    void DoSomeThing();

private:

    TStrategy   strategy_;
};


template<typename TStrategy>
CContext<TStrategy>::CContext()
{

}


template<typename TStrategy>
CContext<TStrategy>::~CContext()
{

}


template<typename TStrategy>
void CContext<TStrategy>::DoSomeThing()
{
    strategy_.DoSomeAlgorithm();
}


#endif  //  _CONTEXT_H_

