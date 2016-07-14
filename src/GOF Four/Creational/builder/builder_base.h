///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   builder_base.h
/// 	@brief	����������. 
/// 
///		��Ҫ�ṩ��������ӿںͲ���ʵ��  
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

//  ��Ʒ��Ϣ(��ʾ��ֻ����ʾ��������ʵ�֣�����ͬһ��Ʒ��Ϣ�ṹ)
//  1. ��ʵ�ϣ���Ʒ��Ϣ����Ϊ�����ṹ����϶��ɵĸ��ӽṹ
//     ���幹���Ĺ�������Ӧ��ͬ��ʵ�ֹ����������;
//  2. ��Ʒ���Դ��ⲿ���벻ͬ��ʵ�ֹ����������������ɹ����������ڲ����ѹ���
//     �Ĳ�Ʒ;
//  3. ��Ʒ����Ϊ��ͬ����ģ���ͬ��ʵ�ֹ������������ɲ�ͬ����Ĳ�Ʒ�������ܴ�
//     ������һ����ͬһ�����ݽṹ
//  4. ��󣬹�����ģʽ��ʵ���ж���ʵ����ʽ����һ�����մ��ַ�ʽʵ��
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
 
    //  �ֲ��������
    virtual void BuildPart() = 0;

    //  ��ȡ�����Ʒ
    virtual Product & GetProduct();

private:

    //  ��ʵ�����½ӿڣ����Բ����ڻ�����֣���������ʵ���κι�������Ҳ��
    virtual void BuildPartName();

    virtual void BuildPartId();

    virtual void BuildPartSerialNum();

protected:

    Product         product_;
};


#endif  //  _BUILDER_BASE_H_
