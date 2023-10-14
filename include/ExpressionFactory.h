#ifndef EXPRESSION_FACTORY_H
#define EXPRESSION_FACTORY_H

#include <memory>

#include "Context.h"
#include "IExpression.h" 

class ExpressionFactory
{
public:
    ExpressionFactory();
    ~ExpressionFactory() = default;

    void interpret(Context& con);
private:
    std::vector<std::shared_ptr<IExpression>> expressions_; 
};

#endif