

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>
#include <stack>
#include <deque>

#ifndef LineSizeAn
#define LineSizeAn 66
#endif
#ifndef STR1
#define STR1 "\033[32mDefault constructor called\033[0m\n"
#endif
#ifndef STR2
#define STR2 "\033[32mCopy constructor called\033[0m\n"
#endif
#ifndef STR3
#define STR3 "\033[32mDestructor called\033[0m\n"
#endif
#ifndef STR4
#define STR4 "\033[32mCopy assignment operator called\033[0m\n"
#endif

#ifndef STR6
#define STR6 "\033[32mConstructor with Number of elements called\033[0m\n"
#endif

// The std::stack container is very nice. Unfortunately, it is one of the only STL Containers that is NOT iterable. That’s too bad.
// But why would we accept this? Especially if we can take the liberty of butchering the
// original stack to create missing features.
// To repair this injustice, you have to make the std::stack container iterable.
// Write a MutantStack class. It will be implemented in terms of a std::stack.
// It will offer all its member functions, plus an additional feature: iterators.

// Print messages
void showCaseMutantStack(int i1)
{
	if (i1 == 0)
	{
		// std::cout << std::string(LineSizeAn, '-')<< std::endl ;
		// std::cout << "\033[32m-> MutantStack Class: \033[0m";
	}
	if (i1 == 1)
		std::cout << STR1;
	else if (i1 == 2)
		std::cout << STR2;
	else if (i1 == 3)
		std::cout << STR3;
	else if (i1 == 4)
		std::cout << STR4;
	else if (i1 == 6)
		std::cout << STR6;
}

template <class Tclass>
class MutantStack : public std::stack<Tclass>
{
public:
	typedef std::stack<Tclass> stack;
	typedef typename stack::container_type Container;
	typedef typename Container::iterator iterator;
	typedef typename Container::reverse_iterator reverse_iterator;


	MutantStack(void) : stack()
	{
		showCaseMutantStack(0);
		showCaseMutantStack(1);
	};
	~MutantStack()
	{
		// showCaseMutantStack(0);
		// showCaseMutantStack(3);
	}

	MutantStack(const MutantStack &obj1) : stack(obj1)
	{
		// showCaseMutantStack(0);
		// showCaseMutantStack(2);
	};
	MutantStack &operator=(const MutantStack &obj1)
	{
		// showCaseMutantStack(0);
		// showCaseMutantStack(4);
		if (this != &obj1)
			*this = obj1;
		return (*this);
	};

	iterator begin()
	{
		return (this->c.begin());
	};
	iterator end()
	{
		return (this->c.end());
	};
	reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	};
	reverse_iterator rend()
	{
		return (this->c.rend());
	};

private:
protected:
};

// std::ostream &operator<<(std::ostream &out1, MutantStack const &obj1);

#endif
