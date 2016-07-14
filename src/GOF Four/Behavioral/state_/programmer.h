///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   programmer.h
/// 	@brief	程序员(上下文环境,用以控制等开发状态). 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/23  14:53:06
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PROGRAMER_H_
#define     _PROGRAMER_H_

class LightBaseState;

class Programmer
{
public:

    Programmer();

    virtual ~Programmer();

public:

    void TouchSwitch();

private:

    //  设置灯状态基类为友元类，便于其直接访问修改其维护的等状态
    friend class LightBaseState;

    void ChangeLightState( LightBaseState *plight_state);

private:

    //  目前只维护一个状态的引用即可,切换时动态创建
    //  有时候可根据需要可以先创建所有的状态对象删除，后期需要时直接引用
    //  另外为了减少避免频繁的创建和删除，我们采用单例模式获取各种状态对象
    LightBaseState  *plight_state_;
};


#endif  //  _PROGRAMER_H_
