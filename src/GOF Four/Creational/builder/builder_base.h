///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   builder_base.h
/// 	@brief	构建器基类. 
/// 
///		主要提供构建基类接口和部分实现  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  14:20:15
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BUILDER_BASE_H_
#define     _BUILDER_BASE_H_

#include <string>

//  产品信息(本示例只是演示基本功能实现，采用同一产品信息结构)
//  1. 事实上，产品信息可以为其他结构或组合而成的复杂结构
//     具体构建的过程由相应不同的实现构建器来添加;
//  2. 产品可以从外部传入不同的实现构造器来构建或者由构造器返回内部的已构建
//     的产品;
//  3. 产品可以为不同种类的，不同的实现构造器可以生成不同种类的产品可以相差很大
//     ，而不一定是同一个数据结构
//  4. 最后，构建者模式事实上有多种实现形式，不一定按照此种方式实现
struct Product
{
    std::string         product_name_;
    unsigned int        product_id_;
    unsigned int        product_serial_num_;
};


class CBuilderBase
{
public:

    CBuilderBase();

    virtual ~CBuilderBase();

public:
 
    //  局部构造过程
    virtual void BuildPart() = 0;

    //  获取构造产品
    virtual Product & GetProduct();

private:

    //  事实上以下接口，可以不用在基类出现，各个子类实现任何构建过程也可
    virtual void BuildPartName();

    virtual void BuildPartId();

    virtual void BuildPartSerialNum();

protected:

    Product         product_;
};


#endif  //  _BUILDER_BASE_H_
