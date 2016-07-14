///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   mediator.h
/// 	@brief	中介者实现类(不同的实现子类可以定制不同的交互策略). 
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

//  事实上，中介者实际上是知道所有的同事的，故如果可以，中介者不需要子类
//  此外，中介者可以直接保存各个同事的引用的
class CMediator : public CBaseMediator
{
public:

    CMediator();

    virtual ~CMediator();

public:

    //  提供给各个同事可以调用的接口
    virtual void NotifyAction( CBaseColleague *pcolleague, int exchange_info, std::string notify_str );

    //  添加同事
    void PushColleague( CBaseColleague *pcolleague );

private:

    std::list<CBaseColleague *> colleague_list_;
};

#endif  //  _MEDIATOR_H_
