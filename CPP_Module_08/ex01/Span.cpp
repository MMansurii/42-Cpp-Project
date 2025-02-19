


#include "Span.hpp"
 
// Print messages
void showCaseSpan(int i1) 
{
    if (i1 ==0)
    {
        // std::cout << std::string(LineSizeAn, '-')<< std::endl ;
        // std::cout << "\033[32m-> Span Class: \033[0m";
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
    
}


// This class will have a member function called addNumber() to add a single number
// to the Span. It will be used in order to fill it. Any attempt to add a new element if there
// are already N elements stored should throw an exception.
void Span::addNumber(int num1) {
    showCaseSpan(0);
    //showCaseSpan(13);
    if (MyVector1.size() < MyNum1)
    {
        MyVector1.push_back(num1);
        return;
    }
    std::cout << "\033[31m 🚫📈 Error: There are already " << MyNum1 << " elements stored.\033[0m\n";
    throw std::runtime_error("\033[31m  Vector is full and there is no more space.\033[0m\n");
    return;
}

// Next, implement two member functions: shortestSpan() and longestSpan()
// They will respectively find out the shortest span or the longest span (or distance, if
// you prefer) between all the numbers stored, and return it. If there are no numbers stored,
// or only one, no span can be found. Thus, throw an exception.

int Span::shortestSpan(void) {
    showCaseSpan(0);
    //showCaseSpan(14);
    if (MyVector1.size() < 2)
    {
        std::cout << "\033[31m 🚫📉 Error: There are no numbers stored or only one.\033[0m\n";
        throw std::runtime_error("\033[31m So, no span can be found.\033[0m\n");
    }
    std::vector<int> MyVector2(MyVector1);
    std::sort(MyVector2.begin(), MyVector2.end());
    int MySpan;
    MySpan = MyVector2[1] - MyVector2[0];
    unsigned int i1 = 0;
    while (++i1 < MyVector2.size())
    {
        int span2 = MyVector2[i1] - MyVector2[i1 - 1];
        if (span2 < MySpan)
            MySpan = span2;
    }
    return MySpan;
}

int Span::longestSpan(void) {
    showCaseSpan(0);
    //showCaseSpan(15);
    if (MyVector1.size() < 2)
    {
        std::cout << "\033[31m 🚫📉 Error: There are no numbers stored or only one.\033[0m\n";
        throw std::runtime_error("\033[31m So, no span can be found.\033[0m\n");
    }
    std::vector<int> MyVector2(MyVector1);
    std::sort(MyVector2.begin(), MyVector2.end());
    int MySpan;
    MySpan = MyVector2[MyVector2.size() - 1] - MyVector2[0];
    return MySpan;
}

void Span::CalladdNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2) {
    showCaseSpan(0);
    //showCaseSpan(16);
    while (it1 != it2)
    {
        addNumber(*it1);
        it1++;
    }
}

// Default constructor 
Span::Span(): MyNum1(0), MyVector1(0) {
    showCaseSpan(0);
    showCaseSpan(1);
}


// Constructor with Number
Span::Span(unsigned int MyNum2): MyNum1(MyNum2), MyVector1(0) {
    showCaseSpan(0);
    showCaseSpan(6);
}


// Copy constructor
Span::Span(const Span &obj1) {
    showCaseSpan(0);
    showCaseSpan(2);
    *this = obj1;
}

// Copy constructor (shorter version)
// Span::Span(const Span &obj1) {
//     showCaseSpan(2);
//     *this = obj1;
// }

Span::~Span() {
    showCaseSpan(0);
    showCaseSpan(3);
}

// Copy assignment operator
Span &Span::operator=(const Span &obj1) {
    showCaseSpan(0);
    showCaseSpan(4);
    if (this == &obj1)
        return *this;
    MyNum1 = obj1.MyNum1;
    MyVector1 = obj1.MyVector1;
    return *this;
}

// Setters and Getters


// std::ostream &operator<<(std::ostream &out1, const Span &obj1) {
//     unsigned int i1 = -1;
//     while (++i1 < obj1.MyVector1.size())
//         std::cout << obj1.MyVector1[i1] << " ";
//     std::cout << "\n";
//     return out1;
// }