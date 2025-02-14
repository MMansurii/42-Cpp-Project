

// Main points:
// Template → A blueprint that allows writing generic code that works with different data types without rewriting the same logic. Used for functions and classes.

// Application → Enables code reusability and type flexibility, commonly used in generic containers (like std::vector), algorithms, and smart pointers in C++.

#include "whatever.hpp"
#include <iostream>

// Main copied from the subject
int main(void)
{
    int a = 2;
    int b = 3;

    // float a = 2.2f;
    // float b = 3.3f;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    return 0;
}

// output should be:
// a = 3, b = 2
// min( a, b ) = 2
// max( a, b ) = 3
// c = chaine2, d = chaine1
// min( c, d ) = chaine1
// max( c, d ) = chaine2
