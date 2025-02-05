


#include "RobotomyRequestForm.hpp"
 
// Print messages
void showCaseRobotomyRequestForm(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSize5, '-')<< std::endl ;
        std::cout << "\033[32m-> RobotomyRequestForm Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR51;
    else if (i1==2)
        std::cout << STR52;
    else if (i1==3)
        std::cout << STR53;
    else if (i1==4)
        std::cout << STR54;
    else if (i1==6)
        std::cout << STR56;
    
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (getIsMySigned() == false)
    {
        std::cout << getName() << STD55 << std::endl;
    }
    else if (getMyExecGrade () < Bureaucrat.getGrade())
    {
        std::cout << getName() << STD56 << std::endl;
        throw AForm::GradeTooLowException();
    }
    static bool random1 = false;
    if (random1 == false)
    {
        std::cout << " DrrrrRRRRrrrrrRRRrrr... " ;
        std::cout << getMytarget() << STD57 ;
        random1 = true;
    }
    else
    {
        std::cout << getMytarget() << STD58 ;
        random1 = false;
    }
}

    
// Default constructor with no Name and no Grade and no target
RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), Mytarget("No Target") {
    showCaseRobotomyRequestForm(0);
    showCaseRobotomyRequestForm(1);
}

// Default constructor with Name and Grades and target
RobotomyRequestForm::RobotomyRequestForm(std::string Mytarget2): AForm("RobotomyRequestForm", 72, 45), Mytarget(Mytarget2) {
    showCaseRobotomyRequestForm(0);
    showCaseRobotomyRequestForm(6);
}


// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj1): AForm(obj1), Mytarget(obj1.Mytarget) {
    showCaseRobotomyRequestForm(0);
    showCaseRobotomyRequestForm(2);
    *this = obj1;
}


RobotomyRequestForm::~RobotomyRequestForm() {
    showCaseRobotomyRequestForm(0);
    showCaseRobotomyRequestForm(3);
}

// Copy assignment operator
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj1) {
    showCaseRobotomyRequestForm(0);
    showCaseRobotomyRequestForm(4);
    if (this != &obj1)
    {
        Mytarget = obj1.Mytarget;
    }
    return *this;
}

// Setters and Getters


std::string RobotomyRequestForm::getMytarget(void) const {
    //showCaseRobotomyRequestForm(0);
    //showCaseRobotomyRequestForm(9);
    return Mytarget;
}

// 


std::ostream &operator<<(std::ostream &out1, const RobotomyRequestForm &obj1) {
    out1 << STDAnS51;
    out1 << obj1.getName(); 
    out1 << STDAnS52;
    out1 << obj1.getMySignGrade() ;
    out1 << STDAnS53;
    out1 << obj1.getMyExecGrade();
    out1 << STDAnS54;
    out1 << obj1.getMytarget();
    out1 << ".  " << std::endl;
    return out1;
}

