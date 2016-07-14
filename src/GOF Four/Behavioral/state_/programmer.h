///////////////////////////////////////////////////////////////////// 
///     COPYRIGHT NOTICE  
///     Copyright (c) 2015   
///     All rights reserved.  
///  
/// 	@file   programmer.h
/// 	@brief	����Ա(�����Ļ���,���Կ��Ƶȿ���״̬). 
/// 
/// 
/// 	@version 		  0.0.1   
/// 	@author           zhouhao
/// 	@date             2016/04/23  14:53:06
///  
///  
/////////////////////////////////////////////////////////////////////

#ifndef     _PROGRAMER_H_
#define     _PROGRAMER_H_

class LightBaseState;

class Programmer
{
public:

    Programmer();

    virtual ~Programmer();

public:

    void TouchSwitch();

private:

    //  ���õ�״̬����Ϊ��Ԫ�࣬������ֱ�ӷ����޸���ά���ĵ�״̬
    friend class LightBaseState;

    void ChangeLightState( LightBaseState *plight_state);

private:

    //  Ŀǰֻά��һ��״̬�����ü���,�л�ʱ��̬����
    //  ��ʱ��ɸ�����Ҫ�����ȴ������е�״̬����ɾ����������Ҫʱֱ������
    //  ����Ϊ�˼��ٱ���Ƶ���Ĵ�����ɾ�������ǲ��õ���ģʽ��ȡ����״̬����
    LightBaseState  *plight_state_;
};


#endif  //  _PROGRAMER_H_
