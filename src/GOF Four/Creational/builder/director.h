///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   director.h
/// 	@brief	构建导向器. 
/// 
///		主要作为外部调用接口的构建导向器  
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

//  导向器可以不关心，产品的样子、内容和构建过程
class CDirector
{
public:

    CDirector( CBuilderBase *);

    ~CDirector();

    //  设置构造者对象
    void SetBuilder( CBuilderBase * );

    //  构造
    void Construct();

private:

    CBuilderBase * pBuilder_;

private:

    CDirector( const CDirector & );
    CDirector & operator = ( const CDirector & );

};


#endif  //  _DIRECTOR_H_
