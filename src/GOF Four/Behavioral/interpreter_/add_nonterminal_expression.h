///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   add_nonterminal_expression.h
/// 	@brief	加法解析表达式(非终结表达式). 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  10:07:39
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _ADD_NONTERMINAL_EXPRESSION_H_
#define     _ADD_NONTERMINAL_EXPRESSION_H_


#include "expression.h"

class CAddNonterminalExpression : public CExpression
{
public:

    CAddNonterminalExpression( CExpression *pleft = nullptr, CExpression *pright = nullptr);

    virtual ~CAddNonterminalExpression();

public:

    virtual int ExcuteExpression( CContext *pexpress );

    virtual int GetValue();

};


#endif  //  _ADD_NONTERMINAL_EXPRESSION_H_
