///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   composite.h
/// 	@brief	组合组件对象. 
/// 
///		内部可能包含多种叶子组件或是组合组件等复杂结构  
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

//  当然也可以用其他的容器来保存组件或组合组件
//  如：树、hash表、列表、链表等
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
