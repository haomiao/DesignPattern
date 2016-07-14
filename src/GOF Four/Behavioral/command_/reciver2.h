///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   reciver2.h
/// 	@brief	接收者类2,可以对功能类似的接收者进行功能扩展或修改. 
///   
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  18:22:58
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _RECIVER2_H_
#define     _RECIVER2_H_


class CReciver2
{
public:

    CReciver2();

    virtual ~CReciver2();
    
public:

    virtual void Action();

};


#endif  //  _RECIVER2_H_
