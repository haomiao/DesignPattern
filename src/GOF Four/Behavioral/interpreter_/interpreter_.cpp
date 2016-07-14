// interpreter_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "calculate.h"


int _tmain(int argc, _TCHAR* argv[])
{
    CCalculate *pcalculate = new CCalculate();
    std::string expression_str = "123+321-111";
    pcalculate->SetExpressionStr( expression_str );
    int res = pcalculate->CalculatExpression();
    std::cout << expression_str << " = " << res << std::endl;


    expression_str = "12233+32154 -   1111";
    pcalculate->SetExpressionStr( expression_str );
    res = pcalculate->CalculatExpression();
    std::cout << expression_str << " = " << res << std::endl;

    expression_str = "123 + 321+111+123+987-523+123+982-42";
    pcalculate->SetExpressionStr( expression_str );
    res = pcalculate->CalculatExpression();
    std::cout << expression_str << " = " << res << std::endl;

    delete pcalculate;

	return 0;
}

