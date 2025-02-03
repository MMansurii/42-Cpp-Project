


#include "Bureaucrat.hpp"
 
// Print messages
void showCaseBureaucrat(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSizeAn, '-')<< std::endl ;
        std::cout << "\033[32m-> Bureaucrat Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR1;
    else if (i1==2)
        std::cout << STR2;
    else if (i1==3)
        std::cout << STR3;
    else if (i1==4)
        std::cout << STR4;
    else if (i1==6)
        std::cout << STR6;
    else if (i1==7)
        std::cout << STR7;
    else if (i1==8)
        std::cout << STR8;
    else if (i1==9)
        std::cout << STR9;
    else if (i1==10)
        std::cout << STR10;
    else if (i1==11)
        std::cout << STR11;
    else if (i1==12)
        std::cout << STR12;
    // else if (i1==10) 
    //     std::cout << STDr1;
    // else if (i1==11)
    //     std::cout << STDd1;
    // else if (i1==12)
    //     std::cout << STDa1;
    // else if (i1==13)
    //     std::cout << STRD1;
    // else if (i1==14)
    //     std::cout << STRD2;  
    // else if (i1==11)
    //     std::cout << STDAnS; 
    
}

void Bureaucrat::signForm(const Form &obj1) {
    if (obj1.getIsMySigned() == true)
        std::cout << getName() << ",   Form " << obj1.getName() << " is already signed!" << std::endl;
    else
        std::cout << getName() << " couldn't sign " << obj1.getName() << " because grade is too low!" << std::endl;
    }
    

// Default constructor with no Name and no Grade
Bureaucrat::Bureaucrat(): Myname("No Name"), Mygrade(150) {
    showCaseBureaucrat(0);
    showCaseBureaucrat(1);
}

// Default constructor with Name and Grade
Bureaucrat::Bureaucrat(std::string Myname2, int Mygrade2): Myname(Myname2), Mygrade(Mygrade2) {
    showCaseBureaucrat(0);
    showCaseBureaucrat(6);
    if (Mygrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (Mygrade > 150)
        throw Bureaucrat::GradeTooLowException();
}

// Default constructor with Grade
Bureaucrat::Bureaucrat(int Mygrade2): Myname("No Name"), Mygrade(Mygrade2) {
    showCaseBureaucrat(0);
    showCaseBureaucrat(7);
    if (Mygrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (Mygrade > 150)
        throw Bureaucrat::GradeTooLowException();
}

// Default constructor with Name
Bureaucrat::Bureaucrat(std::string Myname2): Myname(Myname2), Mygrade(150) {
    showCaseBureaucrat(0);
    showCaseBureaucrat(8);
}

// // Default Constructor with type
// Bureaucrat::Bureaucrat(std::string type2) {
//     showCaseBureaucrat(0);
//     showCaseBureaucrat(1);
//     type = type2;
// }

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &obj1) {
    showCaseBureaucrat(0);
    showCaseBureaucrat(2);
    *this = obj1;
}

// Copy constructor (shorter version)
// Bureaucrat::Bureaucrat(const Bureaucrat &obj1) {
//     showCaseBureaucrat(2);
//     *this = obj1;
// }

Bureaucrat::~Bureaucrat() {
    showCaseBureaucrat(0);
    showCaseBureaucrat(3);
}

// Copy assignment operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj1) {
    showCaseBureaucrat(0);
    showCaseBureaucrat(4);
    if (this != &obj1)
    {
        Mygrade = obj1.Mygrade;
    }
    return *this;
}

// Setters and Getters

// void Bureaucrat::setType(std::string type2) {
//     type = type2;
// }

const std::string Bureaucrat::getName(void) const {
    //showCaseBureaucrat(0);
    showCaseBureaucrat(9);
    return Myname;
}

int Bureaucrat::getGrade(void) const {
    //showCaseBureaucrat(0);
    showCaseBureaucrat(10);
    return Mygrade;
}


// 

void Bureaucrat::GradeIncrement(void) {
    //showCaseBureaucrat(0);
    showCaseBureaucrat(11);
    if (Mygrade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        Mygrade--;
}

void Bureaucrat::GradeDecrement(void) {
    //showCaseBureaucrat(0);
    showCaseBureaucrat(12);
    if (Mygrade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        Mygrade++;
}

std::ostream &operator<<(std::ostream &out1, const Bureaucrat &obj1) {
    out1 << obj1.getName(); //<< ", bureaucrat grade " << obj1.getGrade() << std::endl;
    out1 << STDAnS;
    out1 << obj1.getGrade() << std::endl;
    return out1;
}

// Exceptions

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return Strhigh;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return Strlow;
}

