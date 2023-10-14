#include <string>

#include "Context.h"

std::string Context::getContext()
{
    return context_;
}

void Context::setContext(std::string value)
{
    context_ = value;
}

std::string Context::getInput() const
{
    return input_;
}

int Context::getOutput()
{
    return output_;
}

void Context::setOutput(int value)
{
    output_ = value;
}