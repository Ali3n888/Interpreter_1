#include <iostream>
#include <vector>

#include "Context.h"
#include "IExpression.h"
#include "ThousandExpression.h"
#include "FivehundredExpression.h"
#include "HundredExpression.h"
#include "FiftyExpression.h"
#include "TenExpression.h"
#include "FiveExpression.h"
#include "OneExpression.h"

using namespace std;

int main(int argc, char** argv)
{
    Context con("MCMXLIV");
    std::vector<IExpression*> tree;
    tree.push_back(new ThousandExpression());
    tree.push_back(new FivehundredExpression());
    tree.push_back(new HundredExpression());
    tree.push_back(new FiftyExpression());
    tree.push_back(new TenExpression());
    tree.push_back(new FiveExpression());
    tree.push_back(new OneExpression());
    while(con.getContext().length() != 0)
    {
        for(IExpression* elem : tree)
        {
            elem->interpret(con);
            if (con.getContext().empty())
                break;
        }
    }
    cout << con.getInput() << " is equal to: " << con.getOutput() << endl;
    return 0;
}