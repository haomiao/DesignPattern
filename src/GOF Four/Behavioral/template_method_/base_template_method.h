///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_template_method.h
/// 	@brief	模板方法基类. 
/// 
///		主要提供外部使用接口和其具体子类实现某个算法步骤框架,
//      具体子类可实现自己算法或各步骤实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  16:02:14
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_TEMPLATE_METHOD_H_
#define     _BASE_TEMPLATE_METHOD_H_


//  一般情况下，钩子操作将可以被子类重写或者不重写，即基类可有默认实现而子类可重定义；
//  原语(具体的抽象类操作)需要子类必须重定义实现。而DoSomething(模板方法)基本上不被子类重定义实现。
//  模板方法用于改变部分算法或实现
//  而策略模式是通过委托改变整个算法
class CBaseTemplateMethod
{
public:

    virtual ~CBaseTemplateMethod();

public:

    //  模板方法(也即指明了：按照指定流程、顺序执行算法或实现)，一般不为虚函数
    void DoSomething();

public:

    //  原语操作(纯虚函数)
    virtual void DoSomethingOperator1() = 0;
    virtual void DoSomethingOperator2() = 0;
    
    //  钩子操作(虚函数)
    virtual void DoSomethingOperator3();

private:

    //  公共部分操作实现操作
    void DoSomethingOriginal();
    void DoSomethingSelf();

protected:

    CBaseTemplateMethod();
};


#endif  //  _BASE_TEMPLATE_METHOD_H_
