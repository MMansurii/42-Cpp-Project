

#include "MutantStack.hpp"
#include <iostream>

// Operation in std::stack	Equivalent in std::list 	What it Does?
// push(value)           	push_back(value)        	Adds value to the top (end) of the container
// top()	                back()	                    Returns the last element without removing it
// pop()	                pop_back()            	    Removes the last element

// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }



// Replacing
// MutantStack<int> → std::list<int> and update:
// push() → push_back()
// top() → back()
// pop() → pop_back()

int main()
{
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << lst.back() << std::endl;
    lst.pop_back();
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator it = lst.begin();
    std::list<int>::iterator ite = lst.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::list<int> s(lst); // Copying the list

    return 0;
}


 // result must be:
// 17
// 1
// 5
// 3
// 5
// 737
// 0
//////////////////