///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   ext_base_handler.h
/// 	@brief	��չ����������. 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  15:57:57
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _EXT_BASE_HANDLER_H_
#define     _EXT_BASE_HANDLER_H_

#include "base_handler.h"

class CExtBaseHandler : public CBaseHandler
{
public:

    virtual ~CExtBaseHandler();

public:

    //  ��������Ľӿ�,ÿһ����Ҫ������������࣬Ӧʵ�ָýӿ�
    //  �����ʾ�������κ�����
    //  �����CBaseHandler���������Ӹ���Ķ�����ƴ����Ĭ�ϴ���
    virtual void HandleRequest( CRequest *prequest );

protected:

    CExtBaseHandler( CBaseHandler *psuccessor, int handle_request_type );
};


#endif  //  _EXT_BASE_HANDLER_H_

