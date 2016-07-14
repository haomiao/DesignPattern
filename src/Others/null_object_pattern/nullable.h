#pragma once

class Nullable
{
public:

    virtual ~Nullable()
    {

    }

    virtual bool IsNull() = 0;

    virtual void DoSometing() = 0;

protected:
 
    Nullable()
    {

    }
};
