


#include "ShrubberyCreationForm.hpp"
 
// Print messages
void showCaseShrubberyCreationForm(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSize4, '-')<< std::endl ;
        std::cout << "\033[32m-> ShrubberyCreationForm Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR41;
    else if (i1==2)
        std::cout << STR42;
    else if (i1==3)
        std::cout << STR43;
    else if (i1==4)
        std::cout << STR44;
    else if (i1==6)
        std::cout << STR46;
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (getIsMySigned() == false)
    {
        std::cout << getName() << STD45 << std::endl;
        return;
    }
    else if (getMyExecGrade () < executor.getGrade())
    {
        std::cout << executor.getName() << STD46 << std::endl;
        throw Bureaucrat::GradeTooLowException();
    }
    
        std::ofstream file1((getMytarget() + "_shrubbery").c_str());
        if (!file1)
        {
            throw std::runtime_error("Error: Couldn't open the file.");
        }
        file1 << "        ####/O\\####   " << std::endl;
        file1 << "     ####/O\\*\\####  " << std::endl;
        file1 << "   ####/\\O\\*\\####  " << std::endl;
        file1 << " ####/*O/\\/\\/\O\#### " << std::endl;
        file1 << "   /\\O\\/\O\*\\/\O\  " << std::endl;
        file1 << " /\\*\\/\\*\\/\\/\\ " << std::endl;
        file1 << "/\\O\\/O\\/*/\\/O/\\" << std::endl;
        file1 << "      |\|      " << std::endl;
        file1 << "      |/|      " << std::endl;
        file1 << " -----|\|--------  " << std::endl;
        file1 << "-@@@//|/|\\\\@@@@-----------" << std::endl;
        file1 << "@@@//@|\| \\\\@@@" << std::endl;
        file1 << "@@//@@|/|@@\\\\@@" << std::endl;
        file1 << "@//@@@|\|@@\\\\@" << std::endl;
        file1 << "//@@@@|/|@@@@\\\\" << std::endl;

}

    
// Default constructor with no Name and no Grade and no target
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), Mytarget("No Target") {
    showCaseShrubberyCreationForm(0);
    showCaseShrubberyCreationForm(1);
}

// Default constructor with Name and Grades and target
ShrubberyCreationForm::ShrubberyCreationForm(std::string Mytarget2): AForm("ShrubberyCreationForm", 145, 137), Mytarget(Mytarget2) {
    showCaseShrubberyCreationForm(0);
    showCaseShrubberyCreationForm(6);
}


// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj1): AForm(obj1), Mytarget(obj1.Mytarget) {
    showCaseShrubberyCreationForm(0);
    showCaseShrubberyCreationForm(2);
    *this = obj1;
}


ShrubberyCreationForm::~ShrubberyCreationForm() {
    showCaseShrubberyCreationForm(0);
    showCaseShrubberyCreationForm(3);
}

// Copy assignment operator
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj1) {
    showCaseShrubberyCreationForm(0);
    showCaseShrubberyCreationForm(4);
    if (this != &obj1)
    {
        Mytarget = obj1.Mytarget;
    }
    return *this;
}

// Setters and Getters


std::string ShrubberyCreationForm::getMytarget(void) const {
    //showCaseShrubberyCreationForm(0);
    //showCaseShrubberyCreationForm(9);
    return Mytarget;
}

// 


std::ostream &operator<<(std::ostream &out1, const ShrubberyCreationForm &obj1) {
    out1 << STDAnS41;
    out1 << obj1.getName(); 
    out1 << STDAnS42;
    out1 << obj1.getMySignGrade() ;
    out1 << STDAnS43;
    out1 << obj1.getMyExecGrade();
    out1 << STDAnS44;
    out1 << obj1.getMytarget();
    out1 << ".  " << std::endl;
    return out1;
}

