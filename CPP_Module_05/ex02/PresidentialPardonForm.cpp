


#include "PresidentialPardonForm.hpp"
 
// Print messages
void showCasePresidentialPardonForm(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSize6, '-')<< std::endl ;
        std::cout << "\033[32m-> PresidentialPardonForm Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR61;
    else if (i1==2)
        std::cout << STR62;
    else if (i1==3)
        std::cout << STR63;
    else if (i1==4)
        std::cout << STR64;
    else if (i1==6)
        std::cout << STR66;
    
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (getIsMySigned() == false)
    {
        std::cout << getName() << STD65 << std::endl;
    }
    else if (getMyExecGrade () < executor.getGrade())
    {
        std::cout << getName() << STD66 << std::endl;
        throw AForm::GradeTooLowException();
    }
    else
    {
        std::cout << getMytarget() << STD67 ;
    }
}

    
// Default constructor with no Name and no Grade and no target
PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), Mytarget("No Target") {
    showCasePresidentialPardonForm(0);
    showCasePresidentialPardonForm(1);
}

// Default constructor with Name and Grades and target
PresidentialPardonForm::PresidentialPardonForm(std::string Mytarget2): AForm("PresidentialPardonForm", 25, 5), Mytarget(Mytarget2) {
    showCasePresidentialPardonForm(0);
    showCasePresidentialPardonForm(6);
}


// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj1): AForm(obj1), Mytarget(obj1.Mytarget) {
    showCasePresidentialPardonForm(0);
    showCasePresidentialPardonForm(2);
    *this = obj1;
}


PresidentialPardonForm::~PresidentialPardonForm() {
    showCasePresidentialPardonForm(0);
    showCasePresidentialPardonForm(3);
}

// Copy assignment operator
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj1) {
    showCasePresidentialPardonForm(0);
    showCasePresidentialPardonForm(4);
    if (this != &obj1)
    {
        Mytarget = obj1.Mytarget;
    }
    return *this;
}

// Setters and Getters


std::string PresidentialPardonForm::getMytarget(void) const {
    //showCasePresidentialPardonForm(0);
    //showCasePresidentialPardonForm(9);
    return Mytarget;
}

// 


std::ostream &operator<<(std::ostream &out1, const PresidentialPardonForm &obj1) {
    out1 << STDAnS61;
    out1 << obj1.getName(); 
    out1 << STDAnS62;
    out1 << obj1.getMySignGrade() ;
    out1 << STDAnS63;
    out1 << obj1.getMyExecGrade();
    out1 << STDAnS64;
    out1 << obj1.getMytarget();
    out1 << ".  " << std::endl;
    return out1;
}

