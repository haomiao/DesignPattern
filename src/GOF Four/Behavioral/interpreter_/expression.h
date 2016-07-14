///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   expression.h
/// 	@brief	表达式基类. 
/// 
///		提供最基本的操作接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  9:58:33
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _EXPRESSION_H_
#define     _EXPRESSION_H_

class CContext;

class CExpression
{
public:

    virtual ~CExpression();

    virtual int ExcuteExpression( CContext *pexpress) = 0;

    virtual int GetValue() = 0;

    virtual void SetExpress( CExpression *pleft, CExpression *pright );

protected:

    CExpression( CExpression *pleft = nullptr, CExpression *pright = nullptr );

    CExpression *pleft_;

    CExpression *pright_;

    int          value_;
};


#endif  //  _EXPRESSION_H_
