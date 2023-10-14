#include <string> 

#include "FiveExpression.h"
#include "Context.h"

int FiveExpression::interpret(Context& value)
{
    if( value.getContext().front() == 'V')
    {
        value.setOutput(value.getOutput() + 5);
        std::string tmp = value.getContext().substr(1, std::string::npos);
        value.setContext(tmp);
    }
    return value.getOutput();
}