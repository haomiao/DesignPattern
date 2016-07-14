///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   adaptee.h
/// 	@brief	被适配者. 
/// 
///		提供不能被用户直接使用或不兼容的接口  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/19  11:34:36
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _ADAPTEE_H_
#define     _ADAPTEE_H_

class CAdaptee
{
public:

    CAdaptee();

    ~CAdaptee();

public:

    //  某个与目标接口并不兼容的接口实现,需要被适配的接口
    void DoSomethingAdaptee();
};



#endif  //  _ADAPTEE_H_
