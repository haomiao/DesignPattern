///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_prototype_b.h
/// 	@brief	原型实现类B. 
/// 
///		主要实现原型实现类B相关接口实现 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  17:31:56
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_PROTOTY_B_H_
#define     _CONCRETE_PROTOTY_B_H_


#include "prototype_base.h"

class CConcretePrototypeB : public CPrototypeBase
{
public:

    CConcretePrototypeB();

    virtual ~CConcretePrototypeB();

public:

    virtual CPrototypeBase * Clone();

    virtual void Initializetion( void *pParam1, void *pParam2 );

    virtual void DoSomething();

private:

    char *pPrototypeStr_;
    int   prototypeId_;

private:

    CConcretePrototypeB( const CConcretePrototypeB & );
    CConcretePrototypeB & operator = ( const CConcretePrototypeB & );
};


#endif  //  _CONCRETE_PROTOTY_B_H_
