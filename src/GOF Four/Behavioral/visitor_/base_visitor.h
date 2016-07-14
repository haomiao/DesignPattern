///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_visitor.h
/// 	@brief	�����߻���. 
/// 
///		�ṩ�����ķ��ʸ�Ԫ�ض���Ĳ����ӿ�  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/04  17:21:31
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_VISITOR_H_
#define     _BASE_VISITOR_H_

//  ����Ԫ������
//  ��ʵ�ϣ������߿��Է��ʷ�ͬ����Ķ���Ҳ�������������͵Ķ���
//  ���������������ʵ���Լ���Ҫ���ʵ�Ԫ�ض�������
//  ��Ȼ������һ��Ԫ�����ֻ࣬��Ҫ����һ�����������࣬����Ҳ�����ӷ����߻���ӿ�
//  �Լ������߸�������Ľӿ�ʵ�֣��������޸�Ӱ��ϴ�
#include "element1.h"
#include "element2.h"

class CElementOther;

class CBaseVisitor
{
public:

    virtual ~CBaseVisitor();

public:

    virtual void OnVisitorElement1( CElement1 *pelement);
    virtual void OnVisitorElement2( CElement2 *pelement );
    virtual void OnVisitorElementOther( CElementOther *pelement );

protected:

    CBaseVisitor();
};



#endif  //  _BASE_VISITOR_H_
