

// Main points:

#include "iter.hpp"
#include <iostream>

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double doubleArray[] = {1.11, 2.22, 3.33, 4.44, 5.55};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};

    std::cout << "Int Array:\n";
    iter(intArray, 5, displayElem<int>);
    std::cout << "Float Array:\n";
    iter(floatArray, 5, displayElem<float>);
    std::cout << "Double Array:\n";
    iter(doubleArray, 5, displayElem<double>);
    std::cout << "String Array:\n";
    iter(stringArray, 5, displayElem<std::string>);

    //iter(intArray, 0, displayElem<int>);
    return 0;
}
