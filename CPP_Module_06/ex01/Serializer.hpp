

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <stdint.h>	// uintptr_t -std=c++98
//#include <cstdint>	// uintptr_t -std=c++11

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
#  define STR6 "\033[32mConstructor with Name and Grade called\033[0m\n"
# endif
# ifndef STR7
#  define STR7 "\033[32mConstructor with Grade called\033[0m\n"
# endif
# ifndef STR8
#  define STR8 "\033[32mConstructor with Name called\033[0m\n"
# endif

# ifndef STR9
#  define STR9 "\033[34m(getName function called) \033[0m"
# endif
# ifndef STR10
#  define STR10 "\033[34m(getGrade function called) \033[0m"
# endif
# ifndef STR11
#  define STR11 "\033[34m(GradeIncrement function called) \033[0m\n"
# endif
# ifndef STR12
#  define STR12 "\033[34m(GradeDecrement function called) \033[0m\n"
# endif

// # ifndef STRD1
// #  define STRD1 " Is DEAD 💀\033[0m and can't play anymore.\n"
// # endif
// # ifndef STRD2
// #  define STRD2 " just Died 💀\033[0m\n"
// # endif



// # ifndef STDr1
// #  define STDr1 "\033[34m -> ⚙️ Player is repairing: "
// # endif

// # ifndef STDd1
// #  define STDd1 "\033[35m -> 💔 Player is taking damage: "
// # endif

// #ifndef STDa1
// #  define STDa1 "\033[36m ⚔️ Player is attacking: "
// # endif

// #ifndef Strhigh
// # define Strhigh "\033[35m -> 💀 Grade is too high!\033[0m\n"
// #endif

// #ifndef Strlow
// # define Strlow "\033[35m -> 💀 Grade is too low!\033[0m\n"
// #endif

// #ifndef STDAnS
// # define STDAnS "\033[32m  , grade is: \033[0m"
// #endif

typedef struct Data {
	std::string MyName1;
	int MyGrade1;
	bool IsGraduated;
	Data *next;
} Data;


class Serializer {
	public:

		static uintptr_t serialize(Data* Myptr1);
		static Data* deserialize(uintptr_t Myraw1);
		// Do not require an instance of Serializer to call the serialize and deserialize functions
		

		
		
	private:
		Serializer(void);
		~Serializer(void);
		Serializer(const Serializer &obj1);
		Serializer &operator=(const Serializer &obj1);
		// const std::string Myname;
		// int Mygrade;
	
	protected:
		// std::string type;
};

// std::ostream &operator<<(std::ostream &out1, Serializer const &obj1);

#endif

