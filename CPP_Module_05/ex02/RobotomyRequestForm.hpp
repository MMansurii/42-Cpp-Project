

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>
#include <fstream>

# ifndef LineSize5
#  define LineSize5 66
# endif
# ifndef STR51
#  define STR51 "\033[32mDefault constructor called\033[0m\n"
# endif
# ifndef STR52
#  define STR52 "\033[32mCopy constructor called\033[0m\n"
# endif
# ifndef STR53
#  define STR53 "\033[32mDestructor called\033[0m\n"
# endif
# ifndef STR54
#  define STR54 "\033[32mCopy assignment operator called\033[0m\n"
# endif

# ifndef STR56
#  define STR56 "\033[32mConstructor with Name and Grades and target called\033[0m\n"
# endif

// # ifndef STR59
// #  define STR59 "\033[34m(getName function called) \033[0m"
// # endif


#ifndef STDAnS51
# define STDAnS51 "\033[32mRobotomyRequestForm Name: \033[0m"
#endif
#ifndef STDAnS52
# define STDAnS52 "\033[32m, Signed Grade is:  \033[0m"
#endif
#ifndef STDAnS53
# define STDAnS53 "\033[32m, ExecGrade is : \033[0m"
#endif
#ifndef STDAnS54
# define STDAnS54 "\033[32m, Target is : \033[0m"
#endif

#ifndef STD55
# define STD55 "\033[32m couldn't be executed because it's not signed!\n"\033[0m"
#endif
#ifndef STD56
# define STD56 "\033[32m couldn't execute  because his grade is too low!\033[0m\n"	
#endif
#ifndef STD57
# define STD57 "\033[32m has been robotomized successfully.\033[0m\n"
#endif
#ifndef STD58
# define STD58 "\033[32m has been failed for robotomizing.\033[0m\n"
#endif


class RobotomyRequestForm: public AForm{
	public:

		void execute(Bureaucrat const & executor) const;

		std::string getMytarget(void) const;
		
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(std::string Mytarget);

		RobotomyRequestForm(const RobotomyRequestForm &obj1);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &obj1);		
	private:
		std::string Mytarget;
	
	protected:
};

std::ostream &operator<<(std::ostream &out1, RobotomyRequestForm const &obj1);

#endif

