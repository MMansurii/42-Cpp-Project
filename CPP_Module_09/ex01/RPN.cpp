


#include "RPN.hpp"
 
// Print messages
void showCaseRPN(int i1) 
{
    if (i1 ==0)
    {
        // std::cout << std::string(LineSizeAn, '-')<< std::endl ;
        // std::cout << "\033[32m-> RPN Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR1;
    else if (i1==2)
        std::cout << STR2;
    else if (i1==3)
        std::cout << STR3;
    else if (i1==4)
        std::cout << STR4;
    
}

// Default constructor 
RPN::RPN()
 {
    showCaseRPN(0);
    showCaseRPN(1);
}



// Copy constructor
RPN::RPN(const RPN &obj1) {
    showCaseRPN(0);
    showCaseRPN(2);
    *this = obj1;
}

// Copy constructor (shorter version)
// RPN::RPN(const RPN &obj1) {
//     showCaseRPN(2);
//     *this = obj1;
// }

RPN::~RPN() {
    showCaseRPN(0);
    showCaseRPN(3);
}

// Copy assignment operator
RPN &RPN::operator=(const RPN &obj1) {
    showCaseRPN(0);
    showCaseRPN(4);
    if (this == &obj1)
        return *this;
    MyStack1 = obj1.MyStack1;
    return *this;
}

// Setters and Getters
std::stack<double> RPN::getMyStack1() const {
    return MyStack1;
}

void RPN::setMyStack1(std::stack<double> MyStack1) {
    this->MyStack1 = MyStack1;
}   


//////    Reverse Polish Notation

 

int RPN::check_operator(const std::string &str1)
{
    if (str1=="+" || str1=="-" || str1=="*" || str1=="/")
        return 1;
    return 0;
}

double RPN::do_one_calc(double al, double ar, const std::string &op1)
{
    if (op1 == "+")
        return al + ar;
    if (op1 == "-")
        return al - ar;
    if (op1 == "*")
        return al * ar;
    if (op1 == "/" && ar != 0)
        return al / ar;
    if (op1 == "/" && ar == 0)
        throw std::runtime_error("\033[31m💀Error: Division by zero is not possible.\033[0m\n");
    throw std::runtime_error("\033[31m💀Error: Invalid operator. what is this "+op1+"?\033[0m\n");
}

int RPN::check_read_number(const std::string &str1)
{
    try{
        std::stod(str1);
    }
    catch(const std::exception& e)
    {
        std::cerr <<"\033[31m💀Error: Invalid input (Invalid number)\033[0m\n";
        return 0;
    }
    return 1;
}

// Processes a single token1, pushing numbers onto the stack or applying operators.
void RPN::do_one_token(const std::string &token1)
{
    if (check_operator(token1))
    {
        if (MyStack1.size() < 2)
            throw std::runtime_error("\033[31m💀Error: Not enough operands.\033[0m\n");
        double ar = MyStack1.top();
        MyStack1.pop();
        double al = MyStack1.top();
        MyStack1.pop();
        MyStack1.push(do_one_calc(al, ar, token1));
    }
    else if (check_read_number(token1))
        MyStack1.push(std::stod(token1));
    else
        throw std::runtime_error("\033[31m💀Error: Invalid input (Invalid token).\033[0m\n");
}


double RPN::calcrpn(const std::string &input1)
{
    std::istringstream iss(input1);
    std::string token1;
    while (iss >> token1)
    {
        do_one_token(token1);
    }
    if (MyStack1.size() != 1)
        throw std::runtime_error("\033[31m💀Error: Too many operands.\033[0m\n");
    double result1 = MyStack1.top();
    MyStack1.pop();
    return result1;
}

