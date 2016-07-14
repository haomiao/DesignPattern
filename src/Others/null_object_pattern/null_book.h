#pragma once

#include "nullable.h"

class NullBook : public Nullable
{
public:

    NullBook();

    ~NullBook();

public:

    virtual bool IsNull();

    virtual void DoSometing();
};
