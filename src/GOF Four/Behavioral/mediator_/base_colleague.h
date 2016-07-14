///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   base_colleague.h
/// 	@brief	ͬ�»���. 
/// 
///		�����໥ͨ�ŵ�ͬ�¹�������  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/21  16:04:10
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _BASE_COLLEAGUE_H_
#define     _BASE_COLLEAGUE_H_

#include <string>

//  ģ�ⲻͬ�Ľ�������
//  ֻ��Ϊ�˼����
enum  ExchangeInfo
{
    EIF_NO = 0,
    EIF_SLEEP = 1,
    EIF_WORK = 2,
    EIF_DRINK = 4,
};


class CBaseMediator;

class CBaseColleague
{
public:

    virtual ~CBaseColleague();

    int GetExchangeInfo();

    virtual void SetOutPutStr( std::string output_str ) = 0;

protected:

    CBaseColleague( CBaseMediator *pmediator, int exchange_info );

protected:

    CBaseMediator * pmediator_;

    //  ����Ȥ���¼�(�����Խ��ܵĴ���)
    int             exchange_info_;

    std::string     output_str_;
};


#endif  //  _BASE_COLLEAGUE_H_
