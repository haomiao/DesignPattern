///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   concrete_creator_tmpl.h
/// 	@brief	����ʵ�ִ������࣬ͨ��ģ��ʵ��,�����ǽ�ͨ���̳�. 
/// 
///		��Ҫʵ�ִ����߻���Ľӿ�ʵ��  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  16:30:39
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CONCRETE_CREATOR_TMPL_H_
#define     _CONCRETE_CREATOR_TMPL_H_

#include "creator.h"

template<typename TProduct>
class CConcreteCreatorTmpl : public CCreator
{

public:

    CConcreteCreatorTmpl()
    {

    }

    virtual ~CConcreteCreatorTmpl()
    {

    }

public:

    virtual CProduct * CreateProduct( ProductType productType = PT_PRODUCT_NUM );

};


template<typename TProduct>
CProduct * CConcreteCreatorTmpl<TProduct>::CreateProduct( ProductType productType )
{
    return new TProduct();
}

#endif  //  _CONCRETE_CREATOR_TMPL_H_
