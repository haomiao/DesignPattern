#include "stdafx.h"
#include "add_nonterminal_expression.h"


CAddNonterminalExpression::CAddNonterminalExpression( CExpression *pleft, CExpression *pright ) : CExpression( pleft, pright )
{

}


CAddNonterminalExpression::~CAddNonterminalExpression()
{

}


//  一种采用递归的方式计算表达式
int CAddNonterminalExpression::ExcuteExpression( CContext *pexpress )
{
    value_ = pleft_->ExcuteExpression( pexpress ) + pright_->ExcuteExpression( pexpress );
    return value_;
}


int CAddNonterminalExpression::GetValue()
{
    return value_;
}

