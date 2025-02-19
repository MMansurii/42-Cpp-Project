

#ifndef Span_HPP
# define Span_HPP

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>

# ifndef LineSizeAn
#  define LineSizeAn 66
# endif
# ifndef STR1
#  define STR1 "\033[32mDefault constructor called\033[0m\n"
# endif
# ifndef STR2
#  define STR2 "\033[32mCopy constructor called\033[0m\n"
# endif
# ifndef STR3
#  define STR3 "\033[32mDestructor called\033[0m\n"
# endif
# ifndef STR4
#  define STR4 "\033[32mCopy assignment operator called\033[0m\n"
# endif

# ifndef STR6
#  define STR6 "\033[32mConstructor with Number of elements called\033[0m\n"
# endif


// #ifndef Strhigh
// # define Strhigh "\033[35m -> 💀 Grade is too high!\033[0m\n"
// #endif

// Develop a Span class that can store a maximum of N integers. N is an unsigned int
// variable and will be the only parameter passed to the constructor.

class Span {
	public:

		
	void addNumber(int num1);
	int shortestSpan(void);
	int longestSpan(void);
	void CalladdNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
		
		
	//virtual void makeSound() const;
		// std::string getType(void) const;
		// void setType(std::string type2);

		
		Span(void);
		~Span(void);
		Span(unsigned int MyNum1);


		Span(const Span &obj1);
		Span &operator=(const Span &obj1);

		
		
		
	private:
		unsigned int MyNum1;
		std::vector<int> MyVector1;
	
	protected:
		// std::string type;
};

// std::ostream &operator<<(std::ostream &out1, Span const &obj1);

#endif

