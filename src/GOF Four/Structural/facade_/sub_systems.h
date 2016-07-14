///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   sub_systems.h
/// 	@brief	子系统集合,事实上子系统是由其他的不同类或其他组件构成. 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  9:18:48
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _SUB_SYSTEMS_H_
#define     _SUB_SYSTEMS_H_

class CSleep
{
public:

    void Sleeping();
};


class CEat
{
public:

    void Eating();
};


class CCode
{
public:

    void Coding();
};


class CWalk
{
public:

    void Walking();
};


class CWork
{
public:

    void Working();
};

#endif  //  _SUB_SYSTEMS_H_
