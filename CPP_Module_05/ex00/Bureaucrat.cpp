


#include "Serializer.hpp"
 
// Print messages
void showCaseSerializer(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSizeAn, '-')<< std::endl ;
        std::cout << "\033[32m-> Serializer Class: \033[0m";
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

// Default constructor with no Name and no Grade
Serializer::Serializer(): Myname("No Name"), Mygrade(150) {
    showCaseSerializer(0);
    showCaseSerializer(1);
}

// Default constructor with Name and Grade
Serializer::Serializer(std::string Myname2, int Mygrade2): Myname(Myname2), Mygrade(Mygrade2) {
    showCaseSerializer(0);
    showCaseSerializer(6);
    if (Mygrade < 1)
        throw Serializer::GradeTooHighException();
    else if (Mygrade > 150)
        throw Serializer::GradeTooLowException();
}

// Default constructor with Grade
Serializer::Serializer(int Mygrade2): Myname("No Name"), Mygrade(Mygrade2) {
    showCaseSerializer(0);
    showCaseSerializer(7);
    if (Mygrade < 1)
        throw Serializer::GradeTooHighException();
    else if (Mygrade > 150)
        throw Serializer::GradeTooLowException();
}

// Default constructor with Name
Serializer::Serializer(std::string Myname2): Myname(Myname2), Mygrade(150) {
    showCaseSerializer(0);
    showCaseSerializer(8);
}

// // Default Constructor with type
// Serializer::Serializer(std::string type2) {
//     showCaseSerializer(0);
//     showCaseSerializer(1);
//     type = type2;
// }

// Copy constructor
Serializer::Serializer(const Serializer &obj1) {
    showCaseSerializer(0);
    showCaseSerializer(2);
    *this = obj1;
}

// Copy constructor (shorter version)
// Serializer::Serializer(const Serializer &obj1) {
//     showCaseSerializer(2);
//     *this = obj1;
// }

Serializer::~Serializer() {
    showCaseSerializer(0);
    showCaseSerializer(3);
}

// Copy assignment operator
Serializer &Serializer::operator=(const Serializer &obj1) {
    showCaseSerializer(0);
    showCaseSerializer(4);
    if (this != &obj1)
    {
        Mygrade = obj1.Mygrade;
    }
    return *this;
}

// Setters and Getters

// void Serializer::setType(std::string type2) {
//     type = type2;
// }

const std::string Serializer::getName(void) const {
    //showCaseSerializer(0);
    showCaseSerializer(9);
    return Myname;
}

int Serializer::getGrade(void) const {
    //showCaseSerializer(0);
    showCaseSerializer(10);
    return Mygrade;
}


// 

void Serializer::GradeIncrement(void) {
    //showCaseSerializer(0);
    showCaseSerializer(11);
    if (Mygrade - 1 < 1)
        throw Serializer::GradeTooHighException();
    else
        Mygrade--;
}

void Serializer::GradeDecrement(void) {
    //showCaseSerializer(0);
    showCaseSerializer(12);
    if (Mygrade + 1 > 150)
        throw Serializer::GradeTooLowException();
    else
        Mygrade++;
}

std::ostream &operator<<(std::ostream &out1, const Serializer &obj1) {
    out1 << obj1.getName(); //<< ", Serializer grade " << obj1.getGrade() << std::endl;
    out1 << STDAnS;
    out1 << obj1.getGrade() << std::endl;
    return out1;
}

// Exceptions

const char* Serializer::GradeTooHighException::what() const throw() {
    return Strhigh;
}

const char* Serializer::GradeTooLowException::what() const throw() {
    return Strlow;
}

