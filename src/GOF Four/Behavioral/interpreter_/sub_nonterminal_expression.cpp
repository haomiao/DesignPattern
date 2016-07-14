#include "stdafx.h"
#include "sub_nonterminal_expression.h"


CSubNonterminalExpression::CSubNonterminalExpression(CExpression *pleft, CExpression *pright) : CExpression(pleft, pright)
{

}


CSubNonterminalExpression::~CSubNonterminalExpression()
{

}


//  һ�ֲ��õݹ�ķ�ʽ������ʽ
int CSubNonterminalExpression::ExcuteExpression( CContext *pexpress )
{
    value_ = pleft_->ExcuteExpression(pexpress) - pright_->ExcuteExpression(pexpress);

    return value_;
}


int CSubNonterminalExpression::GetValue()
{
    return value_;
}
