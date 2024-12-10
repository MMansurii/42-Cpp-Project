#include "contact.hpp"
#include "phonebook.hpp"


PhoneBook::PhoneBook(){
    
}

PhoneBook::~PhoneBook(){
    
}


void PhoneBook::AddContact()
{
    static int i;

    this->_contact[i % 8]._initialize();
    // print i
    std::cout << i << std::endl;
    this->_contact[i % 8]._setIndex(i % 8);
    i++;
}

void PhoneBook::_displayContact() 
{
    char index;
    bool valid = true;
    int i = 0;
    
    std::cout << "|     Index|First Name| Last Name| Nickname" << std::endl;
    while (i < 8)
    {
        this->_contact[i]._printContact();
        i++;
    }
    
    if (this->_contact[0].isEmpty())
        std::cout << "No contacts available." << std::endl;
    else
    {
        while (valid)
        {
            std::cout << "Enter the index of the contact you want to display: ";
            std::cin >> index;
            if (std::cin.eof())
                exit(0);
            if (std::cin.fail() || std::cin.peek() != '\n' || index < '0' || index > '7' || this->_contact[index - '0'].isEmpty()) 
            {
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Invalid input. Please enter a valid input." << std::endl;
            }
            else
            {
                this->_contact[index - '0']._printContact();
                valid = false;
            }
        }
    }

}

void PhoneBook::SearchContact()
{
    this->_displayContact();
}