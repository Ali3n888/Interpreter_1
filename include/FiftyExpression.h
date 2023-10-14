#ifndef FIFTY_EXPRESSION_H
#define FIFTY_EXPRESSION_H

#include "IExpression.h"

class FiftyExpression : public IExpression
{
public:
    FiftyExpression() = default;
    ~FiftyExpression() = default;

    int interpret(Context& value);
};

#endif