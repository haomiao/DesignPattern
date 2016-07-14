///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_element.h
/// 	@brief	Ԫ�ػ���. 
/// 
///		�ṩ������Ԫ�ز����ӿںͷ����߽��ܽӿ�  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  17:29:03
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_ELEMENT_H_
#define     _BASE_ELEMENT_H_


class CBaseVisitor;

class CBaseElement
{
public:

    virtual ~CBaseElement();

public:

    virtual void AcceptVisitor( CBaseVisitor *pvisitor) = 0;

protected:

    CBaseElement();

};


#endif  //  _BASE_ELEMENT_H_
