#include <string> 

#include "FiveExpression.h"
#include "Context.h"

int FiveExpression::interpret(Context& value)
{
    if( value.getContext().front() == expression_)
    {
        value.setOutput(value.getOutput() + value_);
        std::string tmp = value.getContext().substr(1, std::string::npos);
        value.setContext(tmp);
    }
    return value.getOutput();
}