///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   proxy_subject.h
/// 	@brief	代理的目标对象. 
/// 
///		主要代理真实的目标对象，操作内容  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  13:52:18
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PROXY_SUBJECT_H_ 
#define     _PROXY_SUBJECT_H_


#include "subject.h"

//  代理，一般用于控制访问、延迟加载、远程代理、复制延迟拷贝、虚拟代理等
//  事实上有时候代理对象可以管理真实对象的生命期，创建时机
//  或者类似于带有引用计数的方式等
//  此外，可以不必要每个类型的realsubject都要有一个对应的proxysubject类
//  如果可能，可以实现一个代理对象，支持多个不同的类型的realsubject
//  不过，代理引入了一个间接层,可能对效率有所影响
class CProxySubject : public CSubject
{
public:

    //  可以通过参数来引入真实的对象的引用
    //  也可以通过其他方式参数或者直接代理内部就创建并维护一个真实对象的引用
    //  也或者是一个间接引用，而不是直接引用，如一个ID，一个文件标识等；
    //  或是一个远程地址
    CProxySubject( CSubject *psubject);

    virtual ~CProxySubject();

public:

    //  代理只限制访问了DoSomething()接口，而屏蔽了
    //  DoOtherthing(),以达到外界限制访问的目的(如过滤、权限控制等)
    virtual void DoSomething();

    virtual void DoOtherthing();

private:

    //  真实对象的一个引用
    CSubject *   preal_subject_;
};


#endif  //  _PROXY_SUBJECT_H_
