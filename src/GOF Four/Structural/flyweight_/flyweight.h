///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   flyweight.h
/// 	@brief	享元基类，主要提供必要的操作接口. 
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

//  难点：找到内部和外部状态并归类
//  内部状态各个对象保存；
//  外部状态由操作接口参数传入
class CFlyweight
{
public:

    virtual ~CFlyweight();

public:

    //  某个操作，需要传入外部状态extStates
    virtual void DoSomething(int extStates);

protected:

    CFlyweight();
};


#endif  //  _FLY_WEIGHT_H_

