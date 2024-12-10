#include "contact.hpp"

class PhoneBook
{
    private:
        Contact _contact[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void    AddContact();
        void    SearchContact();
        void    Exit() const;
        void    _displayContact();
};