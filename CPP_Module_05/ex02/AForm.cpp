


#include "AForm.hpp"
 
// Print messages
void showCaseAForm(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSize3, '-')<< std::endl ;
        std::cout << "\033[32m-> AForm Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR31;
    else if (i1==2)
        std::cout << STR32;
    else if (i1==3)
        std::cout << STR33;
    else if (i1==4)
        std::cout << STR34;
    else if (i1==6)
        std::cout << STR36;
    else if (i1==7)
        std::cout << STR37;
    else if (i1==8)
        std::cout << STR38;
    else if (i1==9)
        std::cout << STR39;
    else if (i1==10)
        std::cout << STR310;
    else if (i1==11)
        std::cout << STR311;
    else if (i1==12)
        std::cout << STR312;
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
AForm::AForm(): Myname("No Name"), MySignGrade(150), MyExecGrade(150), isMySigned(false) {
    showCaseAForm(0);
    showCaseAForm(1);
}


// Default constructor with Name and Grades
AForm::AForm(std::string Myname2, int MySignGrade2, int MyExecGrade2): Myname(Myname2), MySignGrade(MySignGrade2), MyExecGrade(MyExecGrade2), isMySigned(false
) {
    showCaseAForm(0);
    showCaseAForm(6);
    if (MySignGrade < 1 || MyExecGrade < 1)
        throw AForm::GradeTooHighException();
    else if (MySignGrade > 150 || MyExecGrade > 150)
        throw AForm::GradeTooLowException();
}


// AForm::AForm(std::string Myname2, int Mygrade2): Myname(Myname2), Mygrade(Mygrade2) {
//     showCaseAForm(0);
//     showCaseAForm(6);
//     if (Mygrade < 1)
//         throw AForm::GradeTooHighException();
//     else if (Mygrade > 150)
//         throw AForm::GradeTooLowException();
// }

// // Default constructor with Grade
// AForm::AForm(int Mygrade2): Myname("No Name"), Mygrade(Mygrade2) {
//     showCaseAForm(0);
//     showCaseAForm(7);
//     if (Mygrade < 1)
//         throw AForm::GradeTooHighException();
//     else if (Mygrade > 150)
//         throw AForm::GradeTooLowException();
// }

// // Default constructor with Name
// AForm::AForm(std::string Myname2): Myname(Myname2), Mygrade(150) {
//     showCaseAForm(0);
//     showCaseAForm(8);
// }

// // Default Constructor with type
// AForm::AForm(std::string type2) {
//     showCaseAForm(0);
//     showCaseAForm(1);
//     type = type2;
// }

// Copy constructor
AForm::AForm(const AForm &obj1) : Myname(obj1.Myname), MySignGrade(obj1.MySignGrade), MyExecGrade(obj1.MyExecGrade), isMySigned(obj1.isMySigned) {
    showCaseAForm(0);
    showCaseAForm(2);
}

// Copy constructor (shorter version)
// AForm::AForm(const AForm &obj1) {
//     showCaseAForm(2);
//     *this = obj1;
// }

AForm::~AForm() {
    showCaseAForm(0);
    showCaseAForm(3);
}

// Copy assignment operator
AForm &AForm::operator=(const AForm &obj1) {
    showCaseAForm(0);
    showCaseAForm(4);
    if (this != &obj1)
    {
        isMySigned = obj1.isMySigned;
    }
    return *this;
}

// Setters and Getters

// void AForm::setType(std::string type2) {
//     type = type2;
// }

const std::string AForm::getName(void) const {
    //showCaseAForm(0);
    showCaseAForm(9);
    return Myname;
}

bool AForm::getIsMySigned(void) const {
    //showCaseAForm(0);
    showCaseAForm(10);
    return isMySigned;
}

int AForm::getMySignGrade(void) const {
    //showCaseAForm(0);
    showCaseAForm(11);
    return MySignGrade;
}

int AForm::getMyExecGrade(void) const {
    //showCaseAForm(0);
    showCaseAForm(12);
    return MyExecGrade;
}

void AForm::beSigned(const Bureaucrat &obj1) {
    if (obj1.getGrade() < 1 )
        throw Bureaucrat::GradeTooHighException();
    else if (obj1.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
    if (obj1.getGrade() <= MySignGrade)
        isMySigned = true;
}

// 



std::ostream &operator<<(std::ostream &out1, const AForm &obj1) 
{
    out1 << STDAnS31;
    out1 << obj1.getName(); 
    out1 << STDAnS32;
    out1 << obj1.getIsMySigned() ;
    out1 << STDAnS33;
    out1 << obj1.getMyExecGrade();
    out1 << ".  " << std::endl;
    return out1;
}



// Exceptions

const char* AForm::GradeTooHighException::what() const throw() {
    return Strhigh3;
}

const char* AForm::GradeTooLowException::what() const throw() {
    return Strlow3;
}

