///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   context.h
/// 	@brief	上下文，提供表达式解析的必要状态信息. 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  10:00:55
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONTEXT_H_
#define     _CONTEXT_H_

#include <string>

class CContext
{
public:

    CContext( std::string value_str );

    virtual ~CContext();

public:

    void SetValueStr( std::string value_str);

    std::string GetValueStr();

private:

    std::string     value_str_;
    
};


#endif  //  _CONTEXT_H_
