#include "stdafx.h"
#include "calculate.h"

#include "terminal_expression.h"
#include "sub_nonterminal_expression.h"
#include "add_nonterminal_expression.h"

namespace
{
    bool SplitStringToExpression( const std::string& strSource, const std::string& strDelims, std::list<CExpression *>& arrResult )
    {
        arrResult.clear();
        std::string::size_type begIndex = strSource.find_first_not_of( strDelims );
        std::string::size_type endIndex;
        while ( begIndex != std::string::npos )
        {
            endIndex = strSource.find_first_of( strDelims, begIndex );
            if ( std::string::npos == endIndex )
            {
                endIndex = strSource.length();
            }

            arrResult.push_back( new CTerminalExpression( atoi( strSource.substr( begIndex, endIndex - begIndex ).c_str() ) ) );

            begIndex = strSource.find_first_not_of( strDelims, endIndex );
        }

        return true;
    }
}


CCalculate::CCalculate()
{

}


CCalculate::~CCalculate()
{
    ClearExpressions();
}


void CCalculate::ClearExpressions()
{
    std::list<CExpression *>::iterator it;
    while ( !terminal_expression_list_.empty() )
    {
        it = terminal_expression_list_.begin();
        delete ( *it );
        terminal_expression_list_.erase( it );
    }

    while ( !nonterminal_expression_list_.empty() )
    {
        it = nonterminal_expression_list_.begin();
        delete ( *it );
        nonterminal_expression_list_.erase( it );
    }
}


void CCalculate::SetExpressionStr( std::string expression_str )
{
    expression_str_ = expression_str;
}


int CCalculate::CalculatExpression()
{
    ClearExpressions();
    GenerateExpressions();

    if ( nonterminal_expression_list_.size() + 1 != terminal_expression_list_.size() || nonterminal_expression_list_.size() == 0 )
    {
        return 0;
    }

    unsigned int nonterminal_expression_list_size = nonterminal_expression_list_.size();

    CExpression *pnonexpression = nullptr;
    CExpression *pexpression_left = nullptr;
    CExpression *pexpression_right = nullptr;
    CExpression *pnonexpression_new = nullptr;

    //  通过每次终结表达式两个和一个非终结表达式计算
    //  计算后的产生一个新的终点表达式并放置在终点列表表头
    //  重复以上操作，直到非终结列表为空
    for ( unsigned int index = 0; index < nonterminal_expression_list_size; ++index )
    {
        pnonexpression = nonterminal_expression_list_.front();
        nonterminal_expression_list_.pop_front();

        pexpression_left = terminal_expression_list_.front();
        terminal_expression_list_.pop_front();

        pexpression_right = terminal_expression_list_.front();
        terminal_expression_list_.pop_front();
        

        pnonexpression->SetExpress( pexpression_left, pexpression_right );
        pnonexpression_new = new CTerminalExpression(pnonexpression->ExcuteExpression( nullptr ) );

        terminal_expression_list_.push_front( pnonexpression_new );
    }

    return pnonexpression_new->GetValue();
}


void CCalculate::GenerateExpressions()
{
    unsigned int str_size = expression_str_.length();
    if ( str_size == 0 )
    {
        return;
    }

    SplitStringToExpression( expression_str_, "+-", terminal_expression_list_ );

    for ( unsigned int index = 0; index < str_size; ++index )
    {
        if (expression_str_[index] == '+')
        {
            nonterminal_expression_list_.push_back( new CAddNonterminalExpression() );
        }

        if ( expression_str_[index] == '-' )
        {
            nonterminal_expression_list_.push_back( new CSubNonterminalExpression() );
        }
    }
}