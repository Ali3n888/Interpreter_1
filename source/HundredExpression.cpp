#include <string>

#include "HundredExpression.h"

#include "Context.h"

int HundredExpression::interpret(Context& value)
{
    if( value.getContext().front() == 'C')
    {
        auto iter = value.getContext().begin();
        if( !(iter == value.getContext().end()) && *std::next(iter, 1) != 'C')
            value.setOutput(value.getOutput() - 100);
        else
            value.setOutput(value.getOutput() + 100);
        std::string tmp = value.getContext().substr(1, std::string::npos);
        value.setContext(tmp);
    }
    return value.getOutput();
}