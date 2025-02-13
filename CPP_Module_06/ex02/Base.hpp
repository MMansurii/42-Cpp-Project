
#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

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


class Base {
	public:
		virtual ~Base();
	
	private:	
	
	protected:
		
};

// std::ostream &operator<<(std::ostream &out1, Base const &obj1);

#endif

