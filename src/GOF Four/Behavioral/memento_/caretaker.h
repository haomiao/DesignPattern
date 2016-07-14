///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   caretaker.h
/// 	@brief	������. 
/// 
///		��Ҫά�������߱���״̬�����ɵı���¼  
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

//  �ڲ���ʱͨ����ջ��ά����������¼
//  ������ֻ��ά������¼�������޸ı���¼����
class Caretaker
{
public:

    Caretaker();

    ~Caretaker();

public:

    void PushMemento(Memento *pmemento);

    //  һ������£�������TopMemento����Ҫ�޳��ñ���¼
    //  ����Ҫ�ٵ���PopMemento
    Memento * TopMemento();

    void PopMemento();

private:

    std::stack<Memento *>   memento_stack_;
};


#endif  //  _CATETAKER_H_

