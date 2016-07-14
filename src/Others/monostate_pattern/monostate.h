#pragma once

class Monostate
{
public:

    Monostate();

    ~Monostate();

    void SetNum(unsigned int num);

    unsigned int GetNum();

private:

    //  某个静态成员,表示状态
    static unsigned int num_;

};
