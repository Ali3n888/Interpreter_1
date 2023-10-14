#ifndef ONE_EXPRESSION_H
#define ONE_EXPRESSION_H

#include "IExpression.h"

const std::string SIGNS = "MDCLXVI";

class OneExpression : public IExpression
{
public: 
    OneExpression()
        : expression_{'I'}, value_{1} {
    }
    
    OneExpression(char expression, int value)
        : expression_{expression}, value_{value}
    {
        int idx = SIGNS.find(expression_);
        lowerSigns_ = SIGNS.substr(idx, std::string::npos);    
    }
    
    ~OneExpression() = default;

    int interpret(Context& value);
private:
    char expression_;
    int value_;
    
    std::string lowerSigns_;
};

#endif