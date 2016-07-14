///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   data_struct.h
/// 	@brief	���ݽṹ����. 
/// 
///		һ��Ϊ����Ԫ�ض�����������ṩ�����Ĳ����ӿ�ʵ��  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  17:56:10
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _DATA_STRUCT_H_
#define     _DATA_STRUCT_H_


#include "base_visitor.h"
#include "element1.h"
#include "element2.h"

class CDataStruct
{
public:

    CDataStruct();

    ~CDataStruct();

public:

    void ErgodicElement(CBaseVisitor *pvisitor);

private:

    CElement1   m_element1;
    CElement2   m_element2;
};



#endif  //  _DATA_STRUCT_H_

