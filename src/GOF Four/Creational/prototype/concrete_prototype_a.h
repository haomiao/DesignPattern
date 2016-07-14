///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_prototype_a.h
/// 	@brief	ԭ��ʵ����A. 
/// 
///		��Ҫʵ��ԭ��ʵ����A��ؽӿ�ʵ�� 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  17:31:56
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_PROTOTY_A_H_
#define     _CONCRETE_PROTOTY_A_H_


#include "prototype_base.h"

class CConcretePrototypeA : public CPrototypeBase
{
public:

    CConcretePrototypeA();

    virtual ~CConcretePrototypeA();

public:

    virtual CPrototypeBase * Clone();

    virtual void Initializetion( void *pParam1, void *pParam2 );

    virtual void DoSomething();

private:

    char  pPrototypeStr_[128];
    int   prototypeId_;

private:

    CConcretePrototypeA( const CConcretePrototypeA & );
    CConcretePrototypeA & operator = ( const CConcretePrototypeA & );

};


#endif  //  _CONCRETE_PROTOTY_A_H_
