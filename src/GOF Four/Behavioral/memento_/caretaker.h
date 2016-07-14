///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   caretaker.h
/// 	@brief	管理者. 
/// 
///		主要维护发起者保存状态而生成的备忘录  
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/22  10:12:47
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _CATETAKER_H_
#define     _CATETAKER_H_

#include <stack>

class Memento;

//  内部暂时通过堆栈来维护各个备忘录
//  管理者只能维护备忘录，不能修改备忘录内容
class Caretaker
{
public:

    Caretaker();

    ~Caretaker();

public:

    void PushMemento(Memento *pmemento);

    //  一般情况下，调用了TopMemento后，需要剔除该备忘录
    //  则需要再调用PopMemento
    Memento * TopMemento();

    void PopMemento();

private:

    std::stack<Memento *>   memento_stack_;
};


#endif  //  _CATETAKER_H_

