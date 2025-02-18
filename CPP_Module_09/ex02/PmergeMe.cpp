


#include "PmergeMe.hpp"
 
// Print messages
void showCasePmergeMe(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSizeAn, '-')<< std::endl ;
        std::cout << "\033[32m-> PmergeMe Class: \033[0m";
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

void PmergeMe::signForm(const Form &obj1) {
    if (obj1.getIsMySigned() == true)
        std::cout << "\n" << getName() << ",   Form " << obj1.getName() << " is already signed!" << std::endl;
    else
        std::cout << "\n" << getName() << " couldn't sign " << obj1.getName() << " because grade is too low!" << std::endl;
    }
    

// Default constructor with no Name and no Grade
PmergeMe::PmergeMe(): Myname("No Name"), Mygrade(150) {
    showCasePmergeMe(0);
    showCasePmergeMe(1);
}

// Default constructor with Name and Grade
PmergeMe::PmergeMe(std::string Myname2, int Mygrade2): Myname(Myname2), Mygrade(Mygrade2) {
    showCasePmergeMe(0);
    showCasePmergeMe(6);
    if (Mygrade < 1)
        throw PmergeMe::GradeTooHighException();
    else if (Mygrade > 150)
        throw PmergeMe::GradeTooLowException();
}

// Default constructor with Grade
PmergeMe::PmergeMe(int Mygrade2): Myname("No Name"), Mygrade(Mygrade2) {
    showCasePmergeMe(0);
    showCasePmergeMe(7);
    if (Mygrade < 1)
        throw PmergeMe::GradeTooHighException();
    else if (Mygrade > 150)
        throw PmergeMe::GradeTooLowException();
}

// Default constructor with Name
PmergeMe::PmergeMe(std::string Myname2): Myname(Myname2), Mygrade(150) {
    showCasePmergeMe(0);
    showCasePmergeMe(8);
}

// // Default Constructor with type
// PmergeMe::PmergeMe(std::string type2) {
//     showCasePmergeMe(0);
//     showCasePmergeMe(1);
//     type = type2;
// }

// Copy constructor
PmergeMe::PmergeMe(const PmergeMe &obj1) {
    showCasePmergeMe(0);
    showCasePmergeMe(2);
    *this = obj1;
}

// Copy constructor (shorter version)
// PmergeMe::PmergeMe(const PmergeMe &obj1) {
//     showCasePmergeMe(2);
//     *this = obj1;
// }

PmergeMe::~PmergeMe() {
    showCasePmergeMe(0);
    showCasePmergeMe(3);
}

// Copy assignment operator
PmergeMe &PmergeMe::operator=(const PmergeMe &obj1) {
    showCasePmergeMe(0);
    showCasePmergeMe(4);
    if (this != &obj1)
    {
        Mygrade = obj1.Mygrade;
    }
    return *this;
}

// Setters and Getters

// void PmergeMe::setType(std::string type2) {
//     type = type2;
// }

const std::string PmergeMe::getName(void) const {
    //showCasePmergeMe(0);
    showCasePmergeMe(9);
    return Myname;
}

int PmergeMe::getGrade(void) const {
    //showCasePmergeMe(0);
    showCasePmergeMe(10);
    return Mygrade;
}


// 

void PmergeMe::GradeIncrement(void) {
    //showCasePmergeMe(0);
    showCasePmergeMe(11);
    if (Mygrade - 1 < 1)
        throw PmergeMe::GradeTooHighException();
    else
        Mygrade--;
}

void PmergeMe::GradeDecrement(void) {
    //showCasePmergeMe(0);
    showCasePmergeMe(12);
    if (Mygrade + 1 > 150)
        throw PmergeMe::GradeTooLowException();
    else
        Mygrade++;
}

std::ostream &operator<<(std::ostream &out1, const PmergeMe &obj1) {
    out1 << obj1.getName(); //<< ", PmergeMe grade " << obj1.getGrade() << std::endl;
    out1 << STDAnS;
    out1 << obj1.getGrade() << std::endl;
    return out1;
}

// Exceptions

const char* PmergeMe::GradeTooHighException::what() const throw() {
    return Strhigh;
}

const char* PmergeMe::GradeTooLowException::what() const throw() {
    return Strlow;
}

