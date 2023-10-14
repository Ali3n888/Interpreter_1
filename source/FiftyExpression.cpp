#include <string>

#include "FiftyExpression.h"
#include "Context.h"

int FiftyExpression::interpret(Context& value)
{
    if( value.getContext().front() == 'L')
    {
        value.setOutput(value.getOutput() + 50);
        std::string tmp = value.getContext().substr(1, std::string::npos);
        value.setContext(tmp);
    }
    return value.getOutput();
}
