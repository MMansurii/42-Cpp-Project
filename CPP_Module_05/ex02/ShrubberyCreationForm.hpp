

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <fstream>

# ifndef LineSize4
#  define LineSize4 66
# endif
# ifndef STR41
#  define STR41 "\033[32mDefault constructor called\033[0m\n"
# endif
# ifndef STR42
#  define STR42 "\033[32mCopy constructor called\033[0m\n"
# endif
# ifndef STR43
#  define STR43 "\033[32mDestructor called\033[0m\n"
# endif
# ifndef STR44
#  define STR44 "\033[32mCopy assignment operator called\033[0m\n"
# endif

# ifndef STR46
#  define STR46 "\033[32mConstructor with Name and Grades and target called\033[0m\n"
# endif

// # ifndef STR49
// #  define STR49 "\033[34m(getName function called) \033[0m"
// # endif


#ifndef STDAnS41
# define STDAnS41 "\033[32mShrubberyCreationForm Name: \033[0m"
#endif
#ifndef STDAnS42
# define STDAnS42 "\033[32m, Signed Grade is:  \033[0m"
#endif
#ifndef STDAnS43
# define STDAnS43 "\033[32m, ExecGrade is : \033[0m"
#endif
#ifndef STDAnS44
# define STDAnS44 "\033[32m, Target is : \033[0m"
#endif

#ifndef STD45
# define STD45 "\033[32m couldn't be executed because it's not signed!\n"\033[0m"
#endif
#ifndef STD46
# define STD46 "\033[32m couldn't execute  because his grade is too low!\033[0m\n"	
#endif



class ShrubberyCreationForm: public AForm{
	public:

		void execute(Bureaucrat const & executor) const;

		std::string getMytarget(void) const;
		
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string Mytarget);

		ShrubberyCreationForm(const ShrubberyCreationForm &obj1);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj1);		
	private:
		std::string Mytarget;
	
	protected:
};

std::ostream &operator<<(std::ostream &out1, ShrubberyCreationForm const &obj1);

#endif

