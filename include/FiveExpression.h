#ifndef FIVE_EXPRESSION_H
#define FIVE_EXPRESSION_H

#include "IExpression.h"

class FiveExpression : public IExpression
{
public:
    FiveExpression() = default;
    ~FiveExpression() = default;

    int interpret(Context& value);
};

#endif