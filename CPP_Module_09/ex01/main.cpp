

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cerr <<"\033[31m💀Error: Ther is no argument.\033[0m\n";
        return 0;
    }
    if (argc > 2)
    {
        std::cerr <<"\033[31m💀Error: Too many arguments.\033[0m\n";
        return 0;
    }
    std::string input1 = argv[1];
    double result1;
    RPN obj1;
    try
    {
        result1=obj1.calcrpn(input1);
        std::cout << result1 << std::endl;
        
     
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 1;
}
    

    
        