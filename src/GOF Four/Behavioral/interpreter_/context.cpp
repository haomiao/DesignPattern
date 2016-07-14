#include "stdafx.h"
#include "context.h"


CContext::CContext( std::string value_str ):
value_str_(value_str)
{

}


CContext::~CContext()
{

}


void CContext::SetValueStr( std::string value_str )
{
    value_str_ = value_str;
}


std::string CContext::GetValueStr()
{
    return value_str_;
}
