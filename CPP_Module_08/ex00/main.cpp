


#include "easyfind.hpp"


int main()
{
    std::vector<int> vector1;
    std::list<int> list1;

    int i1 = -1;
    while (++i1 < 10)
    {
        vector1.push_back(i1);
        // push_back(i1): Adds the value i1 to the end of vector1.
        // push_back() dynamically increases the vector's size and appends the value at the end.
        list1.push_back(i1);
    }

    try
    {
        std::vector<int>::const_iterator positiveResult1 = easyfind(vector1, 5);
        std::list<int>::const_iterator positiveResult2 = easyfind(list1, 5);

        std::cout << "\033[32m✅  Value found in vector: \033[0m" << *positiveResult1 << std::endl;
        std::cout << "\033[32m✅  Value found in list: \033[0m" << *positiveResult2 << std::endl;

        std::vector<int>::const_iterator negativeResult1 = easyfind(vector1, 10);
        std::list<int>::const_iterator negativeResult2 = easyfind(list1, 10);

        std::cout << "\033[32m✅  Value found in vector: \033[0m" << *negativeResult1 << std::endl;
        std::cout << "\033[32m✅  Value found in list: \033[0m" << *negativeResult2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
