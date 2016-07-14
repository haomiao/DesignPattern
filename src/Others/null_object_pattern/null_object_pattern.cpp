// null_object_pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "null_book.h"
#include "book.h"


int _tmain(int argc, _TCHAR* argv[])
{
    bool  isnull = false;

    Nullable * object = NULL;
    if ( !isnull )
    {
        object = new Book();
    }
    else
    {
        object = new NullBook();
    }

    if ( !object->IsNull() )//  �˴��ɲ����ж��Ƿ�Ϊ�ն��󣬿ն�������Ĭ��ʵ��(ʲôҲ����)
    {
        object->DoSometing();
    }

    object->DoSometing();

    delete object;
    object = NULL;

    Nullable * object2 = NULL;

    isnull = true;
    if ( !isnull )
    {
        object2 = new Book();
    }
    else
    {
        object2 = new NullBook();
    }

    if (!object2->IsNull() )
    {
        object2->DoSometing();
    }

    object2->DoSometing();

    delete object2;

    return 0;
}

