///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   flyweight_factory.h
/// 	@brief	享元工厂对象. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  10:46:07
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _FLYWEIGHT_FACTORY_H_
#define     _FLYWEIGHT_FACTORY_H_

#include <map>


enum FlyWeight_Type
{
    FWT_Type1,
    FWT_Type2,
    FWT_Type3,
    FWT_Type4,
};


class CFlyweight;

class CFlyweightFactory
{
public:

    ~CFlyweightFactory();

public:

    static CFlyweightFactory * GetInstance();

    CFlyweight * GetFlyweight( int flyweight_type );

protected:

    CFlyweightFactory();

private:

    typedef std::map<int, CFlyweight *> FlyWeightMap;
    static FlyWeightMap    flyweight_map_;
};

#endif  //  _FLYWEIGHT_FACTORY_H_

