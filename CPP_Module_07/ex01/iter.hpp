

#ifndef ITER_HPP
#define ITER_HPP


// #include <string>
 #include <iostream>
// #include <stdint.h>	// uintptr_t -std=c++98
//#include <cstdint>	// uintptr_t -std=c++11

// # ifndef LineSizeAn
// #  define LineSizeAn 66
// # endif
// # ifndef STR1
// #  define STR1 "\033[32mDefault constructor called\033[0m\n"
// # endif


// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array.
// • The third one is a function that will be called on every element of the array

template <typename Ta, typename Tf>
void iter(Ta *arrayAddress, size_t arrayLength, Tf func4each) 
{
	if (!arrayAddress)
		{
			std::cout << "💀\033[31m ERROR!! Address of Array is empty. Try again.\033[0m\n";
			return;
		}
	else if (arrayLength == 0)
		{
			std::cout << "💀\033[31m ERROR!!Length of Array is zero. Try again.\033[0m\n";
			return;
		}
	else if (!func4each)
		{
			std::cout << "💀\033[31m ERROR!! Function is empty. Try again.\033[0m\n";
			return;
		}

	size_t i = -1;
	while (++i < arrayLength) 
	{
		func4each(arrayAddress[i]);
	}
}

template <typename Tf2>
void displayElem(Tf2 element1)
{
	std::cout <<"\033[32m   " << element1 << "   \033[0m\n";
	return;
}

#endif

