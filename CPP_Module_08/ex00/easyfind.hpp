

#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stdexcept>
// #include <stdint.h>	// uintptr_t -std=c++98
//#include <cstdint>	// uintptr_t -std=c++11

// # ifndef LineSizeAn
// #  define LineSizeAn 66
// # endif
// # ifndef STR1
// #  define STR1 "\033[32mDefault constructor called\033[0m\n"
// # endif
// # ifndef STR2
// #  define STR2 "\033[32mCopy constructor called\033[0m\n"
// # endif
// # ifndef STR3
// #  define STR3 "\033[32mDestructor called\033[0m\n"
// # endif
//  # ifndef STR4
//  #  define STR4 "\033[31m Value not found in container\033[0m\n"
//  # endif

template <typename Ta>
// Write a function template easyfind that accepts a type T. It takes two parameters.
// The first one has type T and the second one is an integer.
// Assuming T is a container of integers, this function has to find the first occurrence
// of the second parameter in the first parameter.
// If no occurrence is found, you can either throw an exception or return an error value
// of your choice. If you need some inspiration, analyze how standard containers behave.
typename Ta::const_iterator easyfind(const Ta &container, int Myvalue1)
{
	typename Ta::const_iterator its = container.begin();
	typename Ta::const_iterator ite = container.end();
	typename Ta::const_iterator itf = std::find(its, ite, Myvalue1);
	if (itf == ite)
		throw std::runtime_error("\033[31m🔍❌  Value not found in container.\033[0m\n");
	return itf;
}


// Key points:
// Key Concept: container.end() Points Past the Last Element
// container.begin() → Points to the first element.
// container.end() → Points past the last element (not the last element itself).
// std::find(its, ite, Myvalue1):
// If Myvalue1 is found, itf points to the element.
// If Myvalue1 is not found, itf is equal to ite.




#endif
