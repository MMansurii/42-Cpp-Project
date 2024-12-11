# include "Zombie.hpp"

int main( void ) 
{
    std::string name;

    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
   
    // heap allocation
    Zombie *zombi1 = newZombie(name);
    zombi1->_announce();
    delete zombi1;
    
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    // stack allocation
    randomChump(name);
    return 0;
}