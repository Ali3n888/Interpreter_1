#ifndef HUNDRED_EXPRESSION_H
#define HUNDRED_EXPRESSION_H

#include "IExpression.h"

class HundredExpression : public IExpression
{
public:
    HundredExpression() = default;
    ~HundredExpression() = default;

    int interpret(Context& value);
};

#endif