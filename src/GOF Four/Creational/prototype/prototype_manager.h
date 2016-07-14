///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   prototype_manager.h
/// 	@brief	文件描述. 
/// 
///		（本文件实现的功能的详述）  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  17:47:56
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PROTOTYPE_MANAGER_H_
#define     _PROTOTYPE_MANAGER_H_

#include <map>
#include "prototype_base.h"

//  原型管理器
//  这样统一管理，缺点：存在一份没有用到的拷贝
//  当原型对象太多而类型不是很多时，还是可以接受的
class CPrototypeManager
{
public:

    CPrototypeManager();

    ~CPrototypeManager();

public:

    //  获取某类型的原型对象
    CPrototypeBase * GetPrototype( PrototypeType prototypeType);

private:

    typedef std::map < PrototypeType, CPrototypeBase* > PrototypeMap;
    PrototypeMap    prototypeMap_;

private:

    CPrototypeManager( const CPrototypeManager & );
    CPrototypeManager & operator = ( const CPrototypeManager & );
};


#endif  //  _PROTOTYPE_MANAGER_H_
