#include <string>
#include <iterator>

#include "OneExpression.h"
#include "Context.h"

int OneExpression::interpret(Context& value)
{
    if( value.getContext().front() == 'I')
    {
        auto iter = value.getContext().begin();
        if( !(iter == value.getContext().end()) && *std::next(iter, 1) != 'I')
            value.setOutput(value.getOutput() - 1);
        else
            value.setOutput(value.getOutput() + 1);
        std::string tmp = value.getContext().substr(1, std::string::npos);
        value.setContext(tmp);
    }
    return value.getOutput();
}