#ifndef TEN_EXPRESSION_H
#define TEN_EXPRESSION_H

#include "IExpression.h"

class TenExpression : public IExpression
{
public:
    TenExpression() = default;
    ~TenExpression() = default;

    int interpret(Context& value);
};

#endif