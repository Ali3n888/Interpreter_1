#include <string>

#include "ThousandExpression.h"
#include "Context.h"

int ThousandExpression::interpret(Context& value)
{
    if( value.getContext().front() == 'M')
    {
        value.setOutput(value.getOutput() + 1000);
        std::string tmp = value.getContext().substr(1, std::string::npos);
        value.setContext(tmp);
    }
    return value.getOutput();
}