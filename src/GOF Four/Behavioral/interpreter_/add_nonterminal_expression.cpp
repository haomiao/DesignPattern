#include "stdafx.h"
#include "add_nonterminal_expression.h"


CAddNonterminalExpression::CAddNonterminalExpression( CExpression *pleft, CExpression *pright ) : CExpression( pleft, pright )
{

}


CAddNonterminalExpression::~CAddNonterminalExpression()
{

}


//  һ�ֲ��õݹ�ķ�ʽ������ʽ
int CAddNonterminalExpression::ExcuteExpression( CContext *pexpress )
{
    value_ = pleft_->ExcuteExpression( pexpress ) + pright_->ExcuteExpression( pexpress );
    return value_;
}


int CAddNonterminalExpression::GetValue()
{
    return value_;
}

