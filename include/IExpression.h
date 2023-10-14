#ifndef IEXPRESSION_H
#define IEXPRESSION_H

#include "Context.h"

class IExpression 
{
public:
    IExpression() {}
    virtual ~IExpression() { }
    virtual int interpret(Context& value) = 0;
};

#endif