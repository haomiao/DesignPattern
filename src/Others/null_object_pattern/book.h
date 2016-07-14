#pragma once

#include "nullable.h"

class NullBook2;

class Book : public Nullable
{
public:

    Book();

    ~Book();

public:

    virtual bool IsNull();

    virtual void DoSometing();
};
