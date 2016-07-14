///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   originator.h
/// 	@brief	������. 
/// 
///		��Ҫ���Դ�������¼��¼��ǰ��Ҫ�������״̬
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/22  9:29:38
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _ORIGINATOR_H_
#define     _ORIGINATOR_H_

#include <string>

class Memento;

class Originator
{
public:

    Originator();

    ~Originator();

public:

    void SetNum( int num_state );

    void SetFloat( float float_state );

    void SetStr( std::string str_state );

    Memento *GetMemento();

    void RestoreMemento( Memento *pmemento);

    void PrintOutStates();

private:

    //  ���������״̬
    int         num_;
    std::string str_;
    
    //  ����Ҫ�����״̬
    float       float_;
};


#endif  //  _ORIGINATOR_H_
