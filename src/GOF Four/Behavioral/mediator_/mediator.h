///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   mediator.h
/// 	@brief	�н���ʵ����(��ͬ��ʵ��������Զ��Ʋ�ͬ�Ľ�������). 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  16:09:21
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _MEDIATOR_H_
#define     _MEDIATOR_H_

class CBaseColleague;

#include <list>
#include "base_mediator.h"

//  ��ʵ�ϣ��н���ʵ������֪�����е�ͬ�µģ���������ԣ��н��߲���Ҫ����
//  ���⣬�н��߿���ֱ�ӱ������ͬ�µ����õ�
class CMediator : public CBaseMediator
{
public:

    CMediator();

    virtual ~CMediator();

public:

    //  �ṩ������ͬ�¿��Ե��õĽӿ�
    virtual void NotifyAction( CBaseColleague *pcolleague, int exchange_info, std::string notify_str );

    //  ���ͬ��
    void PushColleague( CBaseColleague *pcolleague );

private:

    std::list<CBaseColleague *> colleague_list_;
};

#endif  //  _MEDIATOR_H_
