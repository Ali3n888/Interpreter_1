#ifndef CONTEXT_H
#define CONTEXT_H


class Context 
{
public:
    Context() = delete;
    Context(std::string context) 
        : context_{context}, output_{0}, input_{context} {
    }

    ~Context() = default;

    std::string getContext();
    void setContext(std::string value);
    std::string getInput() const;
    int getOutput();
    void setOutput(int value);

private:
    std::string context_;
    std::string input_; 
    int output_;

};

#endif