///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   product_factory.h
/// 	@brief	��Ʒ����. 
/// 
///		�ٴ�ͨ���򵥵Ĳ�Ʒ�������Դ�����ͬ�Ĳ�Ʒ����  
//      ��װ����ʵ���࣬�����ͻ��Ϳ���ֻ��Ҫ֪�����󹤳��ͳ����Ʒ�ˣ�����
//      �򵥹��� + ���󹤳�����ʵ�ָ�ǿ�������ԺͿ���չ��һ������
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  10:42:46
///  
///  
/////////////////////////////////////////////////////////////////////


#ifndef     _PRODUCT_FACTORY_H_
#define     _PRODUCT_FACTORY_H_

//  ��Ʒ����ö��
enum ProductFactoryConcrete
{
    PC_PRODUCT_FACTORY_1,       //  ��Ʒ����1
    PC_PRODUCT_FACTORY_2,       //  ��Ʒ����2
};


class CProductAbstractFactory;

//  ���µĲ�Ʒ�������ȿ���ͨ����������������Ҳ����ͨ���ӿڴ�����Ӧ����
//  ���⣬��ʵ�϶��ڹ���������Ʒ��Ҳ����ͨ������������
//  ������ʹ�ù���������ʵ�ֳ��󹤳�
class CProductFactory
{
public:

    CProductFactory();
    
    virtual ~CProductFactory();

public:

    CProductAbstractFactory* CreateProductFactory1();
    CProductAbstractFactory* CreateProductFactory2();

public:

    CProductAbstractFactory * CreateProductFactory( ProductFactoryConcrete productFactoryConcrete );

private:

    CProductFactory( const CProductFactory & );
    CProductFactory & operator = ( const CProductFactory & );
};

#endif  //  _PRODUCT_FACTORY_H_