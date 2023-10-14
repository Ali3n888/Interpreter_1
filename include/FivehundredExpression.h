#ifndef FIVEHUNDRED_EXPRESSION_H
#define FIVEHUNDRED_EXPRESSION_H

#include "IExpression.h"

class FivehundredExpression : public IExpression
{
public:
    FivehundredExpression() = default;
    ~FivehundredExpression() = default;

    int interpret(Context& value);
};

#endif