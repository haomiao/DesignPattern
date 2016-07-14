///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   composite.h
/// 	@brief	����������. 
/// 
///		�ڲ����ܰ�������Ҷ����������������ȸ��ӽṹ  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  15:57:44
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _COMPOSITE_H_
#define     _COMPOSITE_H_

#include <vector>
#include "component.h"

//  ��ȻҲ���������������������������������
//  �磺����hash���б������
class CComposite : public CComponent
{
public:

    CComposite();

    virtual ~CComposite();

public:

    virtual void AddComponent( CComponent * pcomponent );

    virtual bool RemoveComponent( CComponent * pcomponent );

    virtual CComponent * GetChildComponent( unsigned int index );

    virtual unsigned int GetChildSize();

private:

    typedef std::vector<CComponent *> ComponentVec;
    ComponentVec  component_vec_;
};


#endif  //  _COMPOSITE_H_
