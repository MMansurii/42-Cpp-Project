


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b1("Bureaucrat1", 40);
    Form f1("Form1", 50, 60);
    f1.beSigned(b1);
    b1.signForm(f1);
    
    return 0;
}
