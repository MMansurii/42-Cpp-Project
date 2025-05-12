#include <iostream>
# include <iomanip>

int main(void)
{
    std::string     input = "HI THIS IS BRAIN";
    std::string     *stringPTR = &input;
    std::string     &stringREF = input;

    
    std::cout << "Memory Address held by input: " << std::setw(24) << &input << std::endl;
    std::cout << "Memory Address held by stringPTR: " << std::setw(20) << stringPTR << std::endl;
    std::cout << "Memory Address held by stringREF: " << std::setw(20) << &stringREF << std::endl;
    
    std::cout << "String held by input: " << std::setw(34) << input << std::endl;
    std::cout << "String held by stringPTR: " << std::setw(30) << *stringPTR << std::endl;
    std::cout << "String held by stringREF: " << std::setw(30) << stringREF << std::endl;
    
    return (0);
}
