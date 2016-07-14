///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   memento.h
/// 	@brief	备忘录. 
/// 
///		主要记录发起者的需要备份的状态
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/22  9:29:38
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _MEMENTO_H_
#define     _MEMENTO_H_

#include <string>

class Originator;

//  仅由发起者对其接触更多的接口，其他的如管理者只是对其保存引用
class Memento
{
private:

    //  可以将发起者作为友元，此可足够宽访问的操作
    //  防止其他外部操作备忘录信息(不过发起者太知道备忘录细节)
    friend  class Originator;

public:

    ~Memento();

protected:

    void SetNumStates( int num_state );

    void SetStrStates( std::string str_state );

    int GetNumStates();

    std::string GetStrStates();

protected:

    Memento();

private:

    //  将被保存的状态
    int         num_state_;

    std::string str_state_;
};


#endif  //  _MEMENTO_H_
