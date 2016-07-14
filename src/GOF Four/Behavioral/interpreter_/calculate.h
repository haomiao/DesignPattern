///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   calculate.h
/// 	@brief	计算类,解析并表达式. 
///   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  10:29:36
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CALCULATE_H_
#define     _CALCULATE_H_

#include <string>
#include <list>

#include "expression.h"

//  简单的封装，暂不处理异常情况,只为演示功能
//  只针对+，-操作，不支持优先级
class CCalculate
{
public:

    CCalculate();

    ~CCalculate();

public:

    void SetExpressionStr( std::string expression_str );

    int CalculatExpression();

private:

    void GenerateExpressions();

    void ClearExpressions();

private:

    std::string             expression_str_;
    std::list<CExpression *> nonterminal_expression_list_;
    std::list<CExpression *> terminal_expression_list_;
};

#endif  //  _CALCULATE_H_

