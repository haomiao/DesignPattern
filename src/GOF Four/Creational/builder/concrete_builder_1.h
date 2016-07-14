///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_builder_1.h
/// 	@brief	构建器实现类1. 
/// 
///		主要作为构建器实现类，构建实现方式一  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  14:16:47
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_BUILDER_1_H_
#define     _CONCRETE_BUILDER_1_H_

#include "builder_base.h"

class CConcreteBuilder1 : public CBuilderBase
{
public:

    CConcreteBuilder1();

    virtual ~CConcreteBuilder1();

public:

    virtual void BuildPart();

    virtual Product & GetProduct();

private:

    virtual void BuildPartName();

    virtual void BuildPartId();

    virtual void BuildPartSerialNum();
};



#endif  //  _CONCRETE_BUILDER_1_H_