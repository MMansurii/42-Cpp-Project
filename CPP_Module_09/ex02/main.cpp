


#include "PmergeMe.hpp"

   

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "\033[31m💀Error: No arguments provided!\033[0m\n";
        return 1;
    }
    PmergeMe pmerge;
    return pmerge.run_with_class(argc, argv);
}

// ./PmergeMe $(jot -r 3000 1 100000 | tr '\n' ' ')
// ./PmergeMe $(shuf -i 1-100000 -n 3000 | tr '\n' ' ')
// ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
// ./PmergeMe 3 5 9 7 4
//  ./PmergeMe "-1" "2"