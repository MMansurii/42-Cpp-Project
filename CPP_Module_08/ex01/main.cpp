

#include "Span.hpp"
#include <bits/stl_numeric.h> // for using iota

// Main from the subject
// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }
// Should output:
// $> ./ex01
// 2
// 14
// $>

int main()
{
    try
    {
        Span vec1(10000);
        // use CalladdNumber to add a range of numbers
        std::vector<int> vec2(10000);
        std::iota(vec2.begin(), vec2.end(), 0); // need -std=c++11
        vec1.CalladdNumber(vec2.begin(), vec2.end());
        std::cout << "Shortest span: ";
        std::cout << vec1.shortestSpan() << std::endl;
        std::cout << "Longest span: ";
        std::cout << vec1.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }

    Span vec3(3);
    try
    {

        vec3.addNumber(6);
        vec3.addNumber(3);
        vec3.addNumber(17);
        vec3.addNumber(9);
        std::cout << "Shortest span: ";
        std::cout << vec3.shortestSpan() << std::endl;
        std::cout << "Longest span: ";
        std::cout << vec3.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << "\n";
    }
    return 0;
}