


#include "Base.hpp"
 
// Print messages
void showCaseBase(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSizeAn, '-')<< std::endl ;
        std::cout << "\033[32m-> Base Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR1;
    else if (i1==2)
        std::cout << STR2;
    else if (i1==3)
        std::cout << STR3;
    else if (i1==4)
        std::cout << STR4;
}


// // Default constructor
// Base::Base() {
//     showCaseBase(0);
//     showCaseBase(1);
// }

// // Copy constructor
// Base::Base(const Base &obj1) {
//     showCaseBase(0);
//     showCaseBase(2);
//     *this = obj1;
// }

// // Copy constructor (shorter version)
// // Base::Base(const Base &obj1) {
// //     showCaseBase(2);
// //     *this = obj1;
// // }

Base::~Base() {
    showCaseBase(0);
    showCaseBase(3);
}

// Copy assignment operator
// Base &Base::operator=(const Base &obj1) {
//     showCaseBase(0);
//     showCaseBase(4);
//     if (this != &obj1)
//     {
//         return *this;
//     }
//     return *this;
// }



