///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   flyweight.h
/// 	@brief	��Ԫ���࣬��Ҫ�ṩ��Ҫ�Ĳ����ӿ�. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  10:34:54
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _FLY_WEIGHT_H_
#define     _FLY_WEIGHT_H_

//  �ѵ㣺�ҵ��ڲ����ⲿ״̬������
//  �ڲ�״̬�������󱣴棻
//  �ⲿ״̬�ɲ����ӿڲ�������
class CFlyweight
{
public:

    virtual ~CFlyweight();

public:

    //  ĳ����������Ҫ�����ⲿ״̬extStates
    virtual void DoSomething(int extStates);

protected:

    CFlyweight();
};


#endif  //  _FLY_WEIGHT_H_

