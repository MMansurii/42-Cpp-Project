# include "harlFilter.hpp"

int main(int ac, char **av)
{
    harlFilter harl;

    if (ac != 2)
    {
        std::cout << "Usage: ./harlFilter [debug/info/warning/error]" << std::endl;
        return (1);
    }
    harl.complain(av[1]);
    return (0);
}