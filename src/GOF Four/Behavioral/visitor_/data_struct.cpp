#include "stdafx.h"
#include "data_struct.h"


CDataStruct::CDataStruct()
{

}


CDataStruct::~CDataStruct()
{

}


void CDataStruct::ErgodicElement( CBaseVisitor *pvisitor )
{
    m_element1.AcceptVisitor( pvisitor );
    m_element2.AcceptVisitor( pvisitor );
}