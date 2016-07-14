///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   memento.h
/// 	@brief	����¼. 
/// 
///		��Ҫ��¼�����ߵ���Ҫ���ݵ�״̬
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

//  ���ɷ����߶���Ӵ�����Ľӿڣ��������������ֻ�Ƕ��䱣������
class Memento
{
private:

    //  ���Խ���������Ϊ��Ԫ���˿��㹻����ʵĲ���
    //  ��ֹ�����ⲿ��������¼��Ϣ(����������̫֪������¼ϸ��)
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

    //  ���������״̬
    int         num_state_;

    std::string str_state_;
};


#endif  //  _MEMENTO_H_
