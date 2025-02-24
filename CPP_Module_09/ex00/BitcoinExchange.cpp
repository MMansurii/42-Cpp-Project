


#include "BitcoinExchange.hpp"
 
// Print messages
void showCaseBitcoinExchange(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSizeAn, '-')<< std::endl ;
        std::cout << "\033[32m-> BitcoinExchange Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR1;
    else if (i1==2)
        std::cout << STR2;
    else if (i1==3)
        std::cout << STR3;
    else if (i1==4)
        std::cout << STR4;

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


BitcoinExchange::BitcoinExchange() {
    showCaseBitcoinExchange(0);
    showCaseBitcoinExchange(1);
}


// Copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj1) {
    showCaseBitcoinExchange(0);
    showCaseBitcoinExchange(2);
    *this = obj1;
}

// Copy constructor (shorter version)
// BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj1) {
//     showCaseBitcoinExchange(2);
//     *this = obj1;
// }

BitcoinExchange::~BitcoinExchange() {
    showCaseBitcoinExchange(0);
    showCaseBitcoinExchange(3);
}

// Copy assignment operator
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj1) {
    showCaseBitcoinExchange(0);
    showCaseBitcoinExchange(4);
    if (this != &obj1)
    {
        // Mygrade = obj1.Mygrade;
    }
    return *this;
}

// Setters and Getters

// void BitcoinExchange::setType(std::string type2) {
//     type = type2;
// }

// 

