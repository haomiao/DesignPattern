///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_visitor.h
/// 	@brief	访问者基类. 
/// 
///		提供基本的访问各元素对象的操作接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  17:21:31
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_VISITOR_H_
#define     _BASE_VISITOR_H_

//  各个元素子类
//  事实上，访问者可以访问非同基类的对象，也可以是其他类型的对象
//  各个访问者子类可实现自己需要访问的元素对象内容
//  虽然新增加一个元素种类，只需要增加一个访问者子类，但是也会增加访问者基类接口
//  以及访问者各个子类的接口实现，这样的修改影响较大
#include "element1.h"
#include "element2.h"

class CElementOther;

class CBaseVisitor
{
public:

    virtual ~CBaseVisitor();

public:

    virtual void OnVisitorElement1( CElement1 *pelement);
    virtual void OnVisitorElement2( CElement2 *pelement );
    virtual void OnVisitorElementOther( CElementOther *pelement );

protected:

    CBaseVisitor();
};



#endif  //  _BASE_VISITOR_H_
