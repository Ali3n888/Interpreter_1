#include <iostream>
#include <vector>

#include "Context.h"
#include "ExpressionFactory.h"

using namespace std;

int main(int argc, char** argv)
{
    Context con("MCMLXXIV");
    ExpressionFactory factory;
    while(con.getContext().length() != 0)
    {
        factory.interpret(con);
    }
    cout << con.getInput() << " is equal to: " << con.getOutput() << endl;
    return 0;
}