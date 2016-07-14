///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   unshared_concrete_flyweight.h
/// 	@brief	ĳ������Ĳ��ɹ������Ԫ��. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  10:40:12
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _UNSHARED_CONCRETE_FLYWEIGHT_H_
#define     _UNSHARED_CONCRETE_FLYWEIGHT_H_

#include "flyweight.h"

class CUnsharedConcreteFlyweight : public CFlyweight
{
public:

    //  �ڲ�״̬�ڳ�ʼ����ʱ�����ã��˺��ٱ�����
    CUnsharedConcreteFlyweight( int inter_states_ );

    virtual ~CUnsharedConcreteFlyweight();

public:

    //  �ɲ������������ⲿ״̬,��ʵ�϶��ڲ������������󣬶��ⲿ״̬�����ܴ���
    virtual void DoSomething( int extStates );

private:

    int     inter_intrinsic_states_;   //  �ڲ��̶�״̬
};


#endif  //  _UNSHARED_CONCRETE_FLYWEIGHT_H_
