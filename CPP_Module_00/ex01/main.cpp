#include "phonebook.hpp"

int     main(void)
{
    PhoneBook phonebook;
    std::string input;

    while (1)
    {
        std::cout << "Enter a command: ";
        std::cin >> input;
        if (std::cin.eof())
            exit(0);
        if (input.empty())
            continue ;
        if (!input.compare("ADD"))
            phonebook.AddContact();
        else if (!input.compare("SEARCH"))
            phonebook.SearchContact();
        else if (!input.compare("EXIT"))
            break ;
    }
    return (0);
}