#include "stdafx.h"
#include "terminal_expression.h"


CTerminalExpression::CTerminalExpression( int value ) :
value_( value )
{

}


CTerminalExpression::~CTerminalExpression()
{

}


//  �ս���ʽ�����ٵݹ����
int CTerminalExpression::ExcuteExpression( CContext *pexpress )
{
    return value_;
}


int CTerminalExpression::GetValue()
{
    return value_;
}