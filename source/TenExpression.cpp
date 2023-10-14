#include <string>

#include "TenExpression.h"
#include "Context.h"

int TenExpression::interpret(Context& value)
{
    if( value.getContext().front() == 'X')
    {
        auto iter = value.getContext().begin();
        if( !(iter == value.getContext().end()) && *std::next(iter, 1) != 'X')
            value.setOutput(value.getOutput() - 10);
        else
            value.setOutput(value.getOutput() + 10);
        std::string tmp = value.getContext().substr(1, std::string::npos);
        value.setContext(tmp);
    }
    return value.getOutput();    
}