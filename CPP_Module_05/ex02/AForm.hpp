

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

# ifndef LineSize3
#  define LineSize3 66
# endif
# ifndef STR31
#  define STR31 "\033[32mDefault constructor called\033[0m\n"
# endif
# ifndef STR32
#  define STR32 "\033[32mCopy constructor called\033[0m\n"
# endif
# ifndef STR33
#  define STR33 "\033[32mDestructor called\033[0m\n"
# endif
# ifndef STR34
#  define STR34 "\033[32mCopy assignment operator called\033[0m\n"
# endif

# ifndef STR36
#  define STR36 "\033[32mConstructor with Name and Grades called\033[0m\n"
# endif
# ifndef STR37
#  define STR37 "\033[32mConstructor with Grade called\033[0m\n"
# endif
# ifndef STR38
#  define STR38 "\033[32mConstructor with Name called\033[0m\n"
# endif

# ifndef STR39
#  define STR39 "\033[34m(getName function called) \033[0m"
# endif
# ifndef STR310
#  define STR310 "\033[34m(getIsMySigned function called) \033[0m"
# endif
# ifndef STR311
#  define STR311 "\033[34m(getMySignGrade function called) \033[0m\n"
# endif
# ifndef STR312
#  define STR312 "\033[34m(getMyExecGrade function called) \033[0m\n"
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

#ifndef Strhigh3
# define Strhigh3 "\033[35m -> 💀 Grade is too high!\033[0m\n"
#endif

#ifndef Strlow3
# define Strlow3 "\033[35m -> 💀 Grade is too low!\033[0m\n"
#endif

#ifndef STDAnS31
# define STDAnS31 "\033[32mName: \033[0m"
#endif
#ifndef STDAnS32
# define STDAnS32 "\033[32m. Is signed?  \033[0m"
#endif
#ifndef STDAnS33
# define STDAnS33 "\033[32m. ExecGrade is : \033[0m"
#endif


class Bureaucrat;

class AForm {
	public:

		class GradeTooHighException: public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				const char* what() const throw();
		};
		//virtual void makeSound() const;
		// std::string getType(void) const;
		// void setType(std::string type2);
		int getMySignGrade(void) const;
		int getMyExecGrade(void) const;
		bool getIsMySigned(void) const;
		std::string getName(void) const;
		
		AForm(void);
		virtual ~AForm(void);
		AForm(std::string Myname, int MySignGrade, int MyExecGrade);
		// AForm(std::string Myname);
		// AForm(int Mygrade);

		AForm(const AForm &obj1);
		AForm &operator=(const AForm &obj1);

		
		// void GradeIncrement(void);
		// void GradeDecrement(void);
		void beSigned(const Bureaucrat &obj1);
		virtual void execute(Bureaucrat const & executor) const = 0;
		
	private:
		const std::string Myname;
		const int MySignGrade;
		const int MyExecGrade;
		bool isMySigned;
	
	protected:
		// std::string type;
};

std::ostream &operator<<(std::ostream &out1, AForm const &obj1);

#endif

