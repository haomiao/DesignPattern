///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   prototype_manager.h
/// 	@brief	�ļ�����. 
/// 
///		�����ļ�ʵ�ֵĹ��ܵ�������  
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

//  ԭ�͹�����
//  ����ͳһ����ȱ�㣺����һ��û���õ��Ŀ���
//  ��ԭ�Ͷ���̫������Ͳ��Ǻܶ�ʱ�����ǿ��Խ��ܵ�
class CPrototypeManager
{
public:

    CPrototypeManager();

    ~CPrototypeManager();

public:

    //  ��ȡĳ���͵�ԭ�Ͷ���
    CPrototypeBase * GetPrototype( PrototypeType prototypeType);

private:

    typedef std::map < PrototypeType, CPrototypeBase* > PrototypeMap;
    PrototypeMap    prototypeMap_;

private:

    CPrototypeManager( const CPrototypeManager & );
    CPrototypeManager & operator = ( const CPrototypeManager & );
};


#endif  //  _PROTOTYPE_MANAGER_H_
