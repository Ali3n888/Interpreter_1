#ifndef FIVE_EXPRESSION_H
#define FIVE_EXPRESSION_H

#include "IExpression.h"

class FiveExpression : public IExpression
{
public:
    FiveExpression()
        : expression_{'V'}, value_{5} {
    }

    FiveExpression(char expression, int value)
        : expression_{expression}, value_{value} {
        }
        
    ~FiveExpression() = default;

    int interpret(Context& value);
private:
    char expression_;
    int value_;
};

#endif