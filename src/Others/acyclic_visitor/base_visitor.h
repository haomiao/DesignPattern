///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_visitor.h
/// 	@brief	访问者基类. 
/// 
///		提供必要的操作接口和实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/10  11:56:03
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_VISITOR_H_
#define     _BASE_VISITOR_H_

//  退化了的访问者基类，不再提供操作元素的基本接口(纯虚函数或虚函数)
//  具体的操作接口由访问者子类实现
class CBaseVisitor
{
public:

    virtual ~CBaseVisitor();

protected:

    CBaseVisitor();
};


#endif  //  _BASE_VISITOR_H_