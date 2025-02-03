


#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat b1("Bureaucrat1", 1);
        std::cout << b1.getName() << " grade is: " << b1.getGrade() << std::endl;
        b1.GradeDecrement();
        std::cout << b1.getName() << " grade is: "   << b1.getGrade() << std::endl;

        std::cout << "\n Test for operator  << \n";
        std::cout << b1 << std::endl;


        Bureaucrat b2("Bureaucrat2", 150);
        std::cout << b2.getName() << " grade is: " << b2.getGrade() << std::endl;
        b2.GradeIncrement();
        std::cout << b2.getName() << " grade is: " << b2.getGrade() << std::endl;


        Bureaucrat b3("Bureaucrat3", 151);
        std::cout << b3.getName()  << " grade is: "  << b3.getGrade()  << std::endl;
        b3.GradeIncrement();
        std::cout << b3.getName() << " grade is: " << b3.getGrade() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
