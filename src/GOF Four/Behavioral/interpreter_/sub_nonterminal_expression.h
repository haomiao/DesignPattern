///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   sub_nonterminal_expression.h
/// 	@brief	减法解析表达式(非终结表达式). 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  10:07:39
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _SUB_NONTERMINAL_EXPRESSION_H_
#define     _SUB_NONTERMINAL_EXPRESSION_H_


#include "expression.h"

class CSubNonterminalExpression : public CExpression
{
public:

    CSubNonterminalExpression( CExpression *pleft = nullptr, CExpression *pright = nullptr );

    virtual ~CSubNonterminalExpression();

public:

    virtual int ExcuteExpression( CContext *pexpress );

    virtual int GetValue();
};


#endif  //  _SUB_NONTERMINAL_EXPRESSION_H_
