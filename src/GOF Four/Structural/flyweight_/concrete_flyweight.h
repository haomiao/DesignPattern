///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_flyweight.h
/// 	@brief	ĳ������Ŀɹ������Ԫ��. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  10:40:12
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_FLYWEIGHT_H_
#define     _CONCRETE_FLYWEIGHT_H_

#include "flyweight.h"

class CConcreteFlyweight : public CFlyweight
{
public:

    //  �ڲ�״̬�ڳ�ʼ����ʱ�����ã��˺��ٱ�����
    CConcreteFlyweight( int inter_states_ );

    virtual ~CConcreteFlyweight();

public:

    //  �ɲ������������ⲿ״̬
    virtual void DoSomething( int extStates );

private:

    int     inter_states_;      //  �ڲ�״̬
};


#endif  //  _CONCRETE_FLYWEIGHT_H_
