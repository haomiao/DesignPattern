// template_method_.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "template_method.h"

int _tmain(int argc, _TCHAR* argv[])
{
    CTemplateMethod *ptemplate_method = new CTemplateMethod();
    ptemplate_method->DoSomething();

    delete ptemplate_method;
	return 0;
}

