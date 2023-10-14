#include <string>
#include <iterator>

#include "OneExpression.h"
#include "Context.h"

int OneExpression::interpret(Context& value)
{
    if( value.getContext().front() == expression_)
    {
        auto iter = value.getContext().begin();
        if(iter != value.getContext().end() && lowerSigns_.find(*std::next(iter, 1)) == std::string::npos)
            value.setOutput(value.getOutput() - value_);
        else
            value.setOutput(value.getOutput() + value_);
        std::string tmp = value.getContext().substr(1, std::string::npos);
        value.setContext(tmp);
    }
    return value.getOutput();
}