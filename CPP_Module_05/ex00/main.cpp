


#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat b1("Bureaucrat1", 1);
        std::cout << b1.getName() << " has grade " << b1.getGrade() << std::endl;
        Bureaucrat b2("Bureaucrat2", 150);
        std::cout << b2.getName() << " has grade " << b2.getGrade() << std::endl;
        Bureaucrat b3("Bureaucrat3", 151);
        std::cout << b3.getName()  << b3.getGrade()<< " has grade "  << std::endl;
        b1.GradeDecrement();
        std::cout << b1.getName()  << b1.getGrade()<< " has grade " << std::endl;
        b2.GradeIncrement();
        std::cout << b2.getName() << " has grade " << b2.getGrade() << std::endl;
        b3.GradeIncrement();
        std::cout << b3.getName() << " has grade " << b3.getGrade() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
