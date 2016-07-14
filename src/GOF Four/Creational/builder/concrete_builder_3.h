///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_builder_3.h
/// 	@brief	构建器实现类3. 
/// 
///		主要作为构建器实现类，构建实现方式三  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  14:16:47
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_BUILDER_3_H_
#define     _CONCRETE_BUILDER_3_H_

#include "builder_base.h"

class CConcreteBuilder3 : public CBuilderBase
{
public:

    CConcreteBuilder3();

    virtual ~CConcreteBuilder3();

public:

    virtual void BuildPart();

    virtual Product & GetProduct();

private:

    virtual void BuildPartName();

    virtual void BuildPartId();

    virtual void BuildPartSerialNum();

};



#endif  //  _CONCRETE_BUILDER_3_H_