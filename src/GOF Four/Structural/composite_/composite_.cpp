// composite_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "leaf_a.h"
#include "leaf_b.h"
#include "composite.h"

//  顺序遍历
void ErgodicComponent( CComponent *pRoot )
{
    if (pRoot != nullptr)
    {
        pRoot->DoSomething();
        unsigned int subComponentSize = pRoot->GetChildSize();
        for ( unsigned int index = 0; index < subComponentSize; ++index )
        {
            ErgodicComponent( pRoot->GetChildComponent( index ) );
        }
    }
}


//  倒序遍历
void ErgodicComponentR( CComponent *pRoot )
{
    if ( pRoot != nullptr )
    {
        unsigned int subComponentSize = pRoot->GetChildSize();
        for ( unsigned int index = subComponentSize - 1;
            index != (unsigned int)-1;  --index )
        {
            ErgodicComponentR( pRoot->GetChildComponent( index ) );
        }
        pRoot->DoSomething();
    }
}


void ClientToUse(CComponent *pRoot, bool resered = false)
{
    //  遍历打印组件
    if (pRoot != nullptr)
    {
        if ( resered == false)
        {
            ErgodicComponent( pRoot );
        }
        else
        {
            ErgodicComponentR( pRoot );
        }
    }
}


int _tmain(int argc, _TCHAR* argv[])
{
    CComponent *pComposite = new CComposite();
    CComponent *pLeafA = new CLeafA();
    CComponent *pLeafB = new CLeafB();
    pComposite->AddComponent( pLeafA );
    pComposite->AddComponent( pLeafB );

    ClientToUse( pLeafA );
    std::cout << std::endl;

    ClientToUse( pLeafB );
    std::cout << std::endl;

    ClientToUse( pComposite );
    std::cout << std::endl;

    CComponent *pRootComposite = new CComposite();
    pRootComposite->AddComponent( new CLeafA() );
    pRootComposite->AddComponent( new CLeafA() );
    pRootComposite->AddComponent( new CLeafB() );
    pRootComposite->AddComponent( new CLeafB() );
    pRootComposite->AddComponent( pComposite );

    ClientToUse( pRootComposite );
    std::cout << std::endl;

    ClientToUse( pRootComposite, true );
    std::cout << std::endl;

    pRootComposite->RemoveComponent( pLeafA );
    ClientToUse( pRootComposite );
    std::cout << std::endl;

    pRootComposite->RemoveComponent( pComposite );
    ClientToUse( pRootComposite );
    std::cout << std::endl;

    delete pRootComposite;

	return 0;
}

