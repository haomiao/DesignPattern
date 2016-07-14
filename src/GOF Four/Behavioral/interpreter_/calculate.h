///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   calculate.h
/// 	@brief	������,���������ʽ. 
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

//  �򵥵ķ�װ���ݲ������쳣���,ֻΪ��ʾ����
//  ֻ���+��-��������֧�����ȼ�
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

