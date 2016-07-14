// visitor_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "data_struct.h"
#include "visitor_a.h"
#include "visitor_b.h"

void ClientToUseDataStructObj( CDataStruct *pdata_struct, CBaseVisitor *pvisitor)
{
    if ( pdata_struct != nullptr && pvisitor != nullptr)
    {
        pdata_struct->ErgodicElement(pvisitor);
    }
}


int _tmain(int argc, _TCHAR* argv[])
{
    CDataStruct data_struct_obj;

    CVisitorA *pelementA = new CVisitorA();
    ClientToUseDataStructObj( &data_struct_obj, pelementA );

    CVisitorB *pelementB = new CVisitorB();
    ClientToUseDataStructObj( &data_struct_obj, pelementB );


    delete pelementA;
    delete pelementB;

	return 0;
}

