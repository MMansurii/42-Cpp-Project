# include <string.h>
#include <iostream>
#include <cstring>
#include "contact.hpp"


Contact::Contact(){

}
Contact::~Contact(){
    
}

std::string Contact::_getInput(std::string str) const
{
    std::string input;

    while (1) {
        std::cout << str;
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(0);
        if (input.empty() || input.find_first_not_of(' ') == std::string::npos){
            std::cout << "Invalid input. Please enter a valid input." << std::endl;
            continue;
        }
        return input;
    }
}


void Contact:: _initialize()
{
    std::cin.clear();
    std::cin.ignore();
    this->first_name = this->_getInput("Enter firstName: ");
    this->last_name = this->_getInput("Enter lastName: ");
    this->nick_name = this->_getInput("Enter nickName: ");
    this->phone_number = this->_getInput("Enter phoneNumber: ");
    std::cout << std::endl;
}

std::string Contact::_checkLen(std::string str) const
{
    if (str.length() > 10) 
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::_setIndex(int i)
{
    this->index = i;
}

int Contact::isEmpty() const
{
    if (this->first_name.empty() && this->last_name.empty() && this->nick_name.empty() && this->phone_number.empty() && this->darkest_secret.empty())
        return 1;
    return 0;
}
void Contact::_printContact() const
{
    if (this->first_name.empty() && this->last_name.empty() && this->nick_name.empty())
        return ;
    std::cout << "|" << std::setw(10) << this->index;
    std::cout << "|" << std::setw(10) << this->_checkLen(this->first_name);
    std::cout << "|" << std::setw(10) << this->_checkLen(this->last_name);
    std::cout << "|" << std::setw(10) << this->_checkLen(this->nick_name)<< std::endl;
}