

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <fstream>

# ifndef LineSize6
#  define LineSize6 66
# endif
# ifndef STR61
#  define STR61 "\033[32mDefault constructor called\033[0m\n"
# endif
# ifndef STR62
#  define STR62 "\033[32mCopy constructor called\033[0m\n"
# endif
# ifndef STR63
#  define STR63 "\033[32mDestructor called\033[0m\n"
# endif
# ifndef STR64
#  define STR64 "\033[32mCopy assignment operator called\033[0m\n"
# endif

# ifndef STR66
#  define STR66 "\033[32mConstructor with Name and Grades and target called\033[0m\n"
# endif

// # ifndef STR69
// #  define STR69 "\033[34m(getName function called) \033[0m"
// # endif


#ifndef STDAnS61
# define STDAnS61 "\033[32mPresidentialPardonForm Name: \033[0m"
#endif
#ifndef STDAnS62
# define STDAnS62 "\033[32m, Signed Grade is:  \033[0m"
#endif
#ifndef STDAnS63
# define STDAnS63 "\033[32m, ExecGrade is : \033[0m"
#endif
#ifndef STDAnS64
# define STDAnS64 "\033[32m, Target is : \033[0m"
#endif

#ifndef STD65
# define STD65 "\033[32m ❌📝 couldn't be executed because it's not signed!\n\033[0m"
#endif
#ifndef STD66
# define STD66 "\033[32m couldn't execute  because his grade is too low!\033[0m\n"	
#endif
#ifndef STD67
# define STD67 "\033[32m has been pardoned 🤝🔓 by Zaphod Beeblebrox.\033[0m\n"
#endif



class PresidentialPardonForm: public AForm{
	public:

		void execute(Bureaucrat const & executor) const;

		std::string getMytarget(void) const;
		
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(std::string Mytarget);

		PresidentialPardonForm(const PresidentialPardonForm &obj1);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &obj1);		
	private:
		std::string Mytarget;
	
	protected:
};

std::ostream &operator<<(std::ostream &out1, PresidentialPardonForm const &obj1);

#endif

