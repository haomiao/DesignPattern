///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   originator.h
/// 	@brief	发起者. 
/// 
///		主要用以创建备忘录记录当前需要被保存的状态
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

    //  将被保存的状态
    int         num_;
    std::string str_;
    
    //  不需要保存的状态
    float       float_;
};


#endif  //  _ORIGINATOR_H_
