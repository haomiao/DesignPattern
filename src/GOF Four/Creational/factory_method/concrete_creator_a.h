///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_creator_a.h
/// 	@brief	具体实现创建者类. 
/// 
///		主要实现创建者基类的接口实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  16:24:19
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_CREATOR_A_H_
#define     _CONCRETE_CREATOR_A_H_

#include "creator.h"

class CConcreteCreatorA : public CCreator
{
public:

    CConcreteCreatorA();

    virtual ~CConcreteCreatorA();

public:

    virtual CProduct * CreateProduct( ProductType productType );

};


#endif  //  _CONCRETE_CREATOR_A_H_
