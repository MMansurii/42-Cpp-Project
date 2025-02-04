


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b1("Bureaucrat1", 40);
    Form f1("Form1", 50, 60);
    f1.beSigned(b1);
    b1.signForm(f1);

    Bureaucrat b2("Bureaucrat2", 70);
    Form f2("Form2", 55, 65);
    f2.beSigned(b2);
    b2.signForm(f2);

    std::cout << "\n Test for operator  << \n";
    std::cout << f1 << std::endl;
    return 0;
}
