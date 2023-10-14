#include <vector>
#include <string>
#include <memory>

#include "ExpressionFactory.h"
#include "IExpression.h"
#include "OneExpression.h"
#include "FiveExpression.h"

ExpressionFactory::ExpressionFactory()
{
    expressions_.push_back(std::make_shared<OneExpression>('I', 1));
    expressions_.push_back(std::make_shared<OneExpression>('X', 10));
    expressions_.push_back(std::make_shared<OneExpression>('C', 100));
    expressions_.push_back(std::make_shared<FiveExpression>('V', 5));
    expressions_.push_back(std::make_shared<FiveExpression>('L', 50));
    expressions_.push_back(std::make_shared<FiveExpression>('D', 500));
    expressions_.push_back(std::make_shared<FiveExpression>('M', 1000));
}


void ExpressionFactory::interpret(Context& con)
{
    for(auto elem : expressions_)
    {
        elem->interpret(con);
        if (con.getContext().empty())
            break;
    }
}
