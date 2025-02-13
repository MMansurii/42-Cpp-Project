


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
}

uintptr_t Serializer::serialize(Data* Myptr1) {
    return (reinterpret_cast<uintptr_t>(Myptr1));
}

Data* Serializer::deserialize(uintptr_t Myraw1) {
    return (reinterpret_cast<Data*>(Myraw1));
}

// Default constructor
Serializer::Serializer() {
    showCaseSerializer(0);
    showCaseSerializer(1);
}

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
        return *this;
    }
    return *this;
}

// Setters and Getters

// void Serializer::setType(std::string type2) {
//     type = type2;
// }

// const std::string Serializer::getName(void) const {
//     //showCaseSerializer(0);
//     showCaseSerializer(9);
//     return Myname;
// }

// int Serializer::getGrade(void) const {
//     //showCaseSerializer(0);
//     showCaseSerializer(10);
//     return Mygrade;
// }


// 

// void Serializer::GradeIncrement(void) {
//     //showCaseSerializer(0);
//     showCaseSerializer(11);
//     if (Mygrade - 1 < 1)
//         throw Serializer::GradeTooHighException();
//     else
//         Mygrade--;
// }

// void Serializer::GradeDecrement(void) {
//     //showCaseSerializer(0);
//     showCaseSerializer(12);
//     if (Mygrade + 1 > 150)
//         throw Serializer::GradeTooLowException();
//     else
//         Mygrade++;
// }

// std::ostream &operator<<(std::ostream &out1, const Serializer &obj1) {
//     out1 << obj1.getName(); //<< ", Serializer grade " << obj1.getGrade() << std::endl;
//     out1 << STDAnS;
//     out1 << obj1.getGrade() << std::endl;
//     return out1;
// }

// Exceptions

// const char* Serializer::GradeTooHighException::what() const throw() {
//     return Strhigh;
// }

// const char* Serializer::GradeTooLowException::what() const throw() {
//     return Strlow;
// }

