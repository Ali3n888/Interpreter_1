#ifndef ONE_EXPRESSION_H
#define ONE_EXPRESSION_H

#include "IExpression.h"

class OneExpression : public IExpression
{
public: 
    OneExpression() = default;
    ~OneExpression() = default;

    int interpret(Context& value);
};

#endif