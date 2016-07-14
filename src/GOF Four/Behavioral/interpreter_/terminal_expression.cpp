#include "stdafx.h"
#include "terminal_expression.h"


CTerminalExpression::CTerminalExpression( int value ) :
value_( value )
{

}


CTerminalExpression::~CTerminalExpression()
{

}


//  终结表达式，不再递归计算
int CTerminalExpression::ExcuteExpression( CContext *pexpress )
{
    return value_;
}


int CTerminalExpression::GetValue()
{
    return value_;
}