///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   terminal_expression.h
/// 	@brief	解析表达式(终结表达式). 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  10:07:39
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _TERMINAL_EXPRESSION_H_
#define     _TERMINAL_EXPRESSION_H_


#include "expression.h"

class CTerminalExpression : public CExpression
{
public:

    CTerminalExpression( int value );

    virtual ~CTerminalExpression();

public:

    virtual int ExcuteExpression( CContext *pexpress );

    virtual int GetValue();

private:

    int     value_;
};


#endif  //  _TERMINAL_EXPRESSION_H_
