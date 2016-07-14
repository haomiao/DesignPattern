#include "stdafx.h"
#include "request.h"


CRequest::CRequest( int request_code, void *params ):
request_code_(request_code),
params_(params)
{

}


CRequest::~CRequest()
{

}


int CRequest::GetRequestCode()
{
    return request_code_;
}


void * CRequest::GetParams()
{
    return params_;
}