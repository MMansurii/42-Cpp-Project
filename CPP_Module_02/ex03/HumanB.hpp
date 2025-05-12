# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon*         _weapon;
        std::string     _name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon& weapon);
        void    attack();
};