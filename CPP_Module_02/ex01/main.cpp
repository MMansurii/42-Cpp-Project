# include "Zombie.hpp"

int main( void ) 
{
    std::string name;

    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
   
    Zombie *zombies = zombieHorde(5, name);

    for (int i = 0; i < 5; i++)
        zombies[i].announce();
    delete [] zombies;
    return 0;
}