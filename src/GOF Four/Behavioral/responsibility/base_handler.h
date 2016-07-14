///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_handler.h
/// 	@brief	���������. 
/// 
///		�ṩְ�����и���������¼�������Ĵ���ӿ�  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/20  15:40:38
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_HANDLER_H_
#define     _BASE_HANDLER_H_

#include "request.h"


//  ������������
//  �κ���Ҫ�����¼������������ɼ̳и��࣬
//  ��ʵ�ִ�����Ը���Ȥ��������¼�
class CBaseHandler
{
public:

    virtual ~CBaseHandler();

public:

    //  ��������Ľӿ�,ÿһ����Ҫ������������࣬Ӧʵ�ָýӿ�
    //  �����ʾ�������κ�����
    //  �������������Լ�����Ȥ�����󣬲�ֱ�ӷ��أ�
    //  ��������Ȥ���򽻸�����ߴ������޺���ߣ��򽻸�����Ĭ�ϵĴ���
    virtual void HandleRequest( CRequest *prequest );

    //  ��ͨ���ⲿ���ã��������ô����߶���͸���Ȥ������
    void SetRequestHandler( CBaseHandler *psuccessor, int handle_request_type );

private:

    //  Ĭ�ϴ��������������
    void DoDefaultThing();

protected:

    //  psuccessor:             ��̴�����(ĳЩ�������ɳ�Ϊ���������)
    //  handle_request_type:    ������������
    CBaseHandler( CBaseHandler *psuccessor, int handle_request_type );

protected:

    CBaseHandler    *psuccessor_;           //  ��̴�����(ְ��������һ���������)
    int             handle_request_type_;   //  ��ǰ�����߿ɴ�������Ȥ����������
};


#endif  //  _BASE_HANDLER_H_
