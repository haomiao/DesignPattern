///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   director.h
/// 	@brief	����������. 
/// 
///		��Ҫ��Ϊ�ⲿ���ýӿڵĹ���������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/18  14:11:29
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _DIRECTOR_H_
#define     _DIRECTOR_H_

class CBuilderBase;

//  ���������Բ����ģ���Ʒ�����ӡ����ݺ͹�������
class CDirector
{
public:

    CDirector( CBuilderBase *);

    ~CDirector();

    //  ���ù����߶���
    void SetBuilder( CBuilderBase * );

    //  ����
    void Construct();

private:

    CBuilderBase * pBuilder_;

private:

    CDirector( const CDirector & );
    CDirector & operator = ( const CDirector & );

};


#endif  //  _DIRECTOR_H_
