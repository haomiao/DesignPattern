///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_visitor.h
/// 	@brief	�����߻���. 
/// 
///		�ṩ��Ҫ�Ĳ����ӿں�ʵ��  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/05/10  11:56:03
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_VISITOR_H_
#define     _BASE_VISITOR_H_

//  �˻��˵ķ����߻��࣬�����ṩ����Ԫ�صĻ����ӿ�(���麯�����麯��)
//  ����Ĳ����ӿ��ɷ���������ʵ��
class CBaseVisitor
{
public:

    virtual ~CBaseVisitor();

protected:

    CBaseVisitor();
};


#endif  //  _BASE_VISITOR_H_