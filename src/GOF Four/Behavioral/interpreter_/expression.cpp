#include "stdafx.h"
#include "expression.h"


CExpression::CExpression( CExpression *pleft, CExpression *pright ) :
pleft_( pleft ),
pright_( pright ),
value_( 0 )
{

}


CExpression::~CExpression()
{

}


void CExpression::SetExpress( CExpression *pleft, CExpression *pright )
{
    pleft_  = pleft;
    pright_ = pright;
}

