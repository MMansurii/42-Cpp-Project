

// Main points:
// - Inheritance is a mechanism that allows you to create a new class from an existing class.
// - The new class is called a derived class, and the existing class is called a base class.
// - The derived class inherits the members of the base class.
// - The derived class can also add new members.
// - The derived class can override the base class members.
// - The derived class can hide the base class members.
// - The derived class can access the base class members.
// - The derived class can access the base class constructors and destructors.
// - The derived class can access the base class constructors and destructors.
// - The derived class can access the base class constructors and destructors.


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base *generate(void)
{
    int i1 = rand() % 3;
    std::cout << "i1: " << i1 << std::endl;
    if (i1 == 0)
    {
        std::cout << "\"A\" class created" << std::endl;
        return new A;
    }
    else if (i1 == 1)
    {
        std::cout << "B class created" << std::endl;
        return new B;
    }
    else if (i1 == 2)
    {
        std::cout << "C class created" << std::endl;
        return new C;
    }
    std::cout << "Error: class not created" << std::endl;
    return NULL;
}

void identify(Base *ptr1)
{
    if (dynamic_cast<A *>(ptr1))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(ptr1))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(ptr1))
        std::cout << "C" << std::endl;
    else
        std::cout << "Error: class not identified" << std::endl;
}

void identify(Base &ptr2)
{
    try
    {
        A &a1 = dynamic_cast<A &>(ptr2);
        (void)a1;
        std::cout << "A" << std::endl;
    }
    catch (const std::exception &e)
    {
        try
        {
            B &b2 = dynamic_cast<B &>(ptr2);
            (void)b2;
            std::cout << "B" << std::endl;
        }
        catch (const std::exception &e)
        {
            try
            {
                C &c3 = dynamic_cast<C &>(ptr2);
                (void)c3;
                std::cout << "C" << std::endl;
            }
            catch (const std::exception &e)
            {
                std::cout << "Error: class not identified" << std::endl;
            }
        }
    }
}


int main()
{
    srand(time(NULL));
    Base *ptr1 = generate();
    identify(ptr1);
    identify(*ptr1);
    delete ptr1;
    return 0;
}