///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   component.h
/// 	@brief	组件对象. 
/// 
///		提供基本的公共实现部分以及操作子类组合类的操作接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  15:46:07
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _COMPONENT_H_
#define     _COMPONENT_H_


class CComponent
{
public:

    virtual ~CComponent();

public:

    //  可实现部分公共实现，以及某些默认操作行为
    //  如：叶子节点不用实现操作子组件的接口: AddComponent,RemoveComponent,
    //  GetChildComponent,GetChildSize
    //  组合组件不用操作叶子节点的接口: DoSomething
    virtual void AddComponent( CComponent * pcomponent );

    virtual bool RemoveComponent( CComponent * pcomponent );

    virtual CComponent * GetChildComponent(unsigned int index);

    virtual unsigned int GetChildSize();

    virtual void DoSomething();

protected:

    CComponent();
};


#endif  //  _COMPONENT_H_

