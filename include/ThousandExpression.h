#ifndef THOUSAND_EXPRESSION_H
#define THOUSAND_EXPRESSION_H

#include "IExpression.h"

class ThousandExpression : public IExpression 
{
public:
    ThousandExpression() {};
    ~ThousandExpression() = default;
    int interpret(Context& value);
};

#endif