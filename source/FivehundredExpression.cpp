#include <string> 

#include "FivehundredExpression.h"
#include "Context.h"

int FivehundredExpression::interpret(Context& value)
{
    if( value.getContext().front() == 'D')
    {
        value.setOutput(value.getOutput() + 500);
        std::string tmp = value.getContext().substr(1, std::string::npos);
        value.setContext(tmp);
    }
    return value.getOutput();
}