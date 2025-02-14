

#ifndef Array_HPP
#define Array_HPP

#include <string>
// #include <stdexcept>
#include <iostream>
#include <cstring>

# ifndef LineSizeAn
#  define LineSizeAn 66
# endif
# ifndef STR1
#  define STR1 "\033[32mDefault constructor called\033[0m\n"
# endif
# ifndef STR2
#  define STR2 "\033[32mCopy constructor called\033[0m\n"
# endif
# ifndef STR3
#  define STR3 "\033[32mDestructor called\033[0m\n"
# endif
# ifndef STR4
#  define STR4 "\033[32mCopy assignment operator called\033[0m\n"
# endif
# ifndef STR6
#  define STR6 "\033[32mConstructor with array and size called\033[0m\n"
# endif



// # ifndef STRD1
// #  define STRD1 " Is DEAD 💀\033[0m and can't play anymore.\n"
// # endif
// # ifndef STRD2
// #  define STRD2 " just Died 💀\033[0m\n"
// # endif



// # ifndef STDr1
// #  define STDr1 "\033[34m -> ⚙️ Player is repairing: "
// # endif

// # ifndef STDd1
// #  define STDd1 "\033[35m -> 💔 Player is taking damage: "
// # endif

// #ifndef STDa1
// #  define STDa1 "\033[36m ⚔️ Player is attacking: "
// # endif


template <typename T1>
class Array {

	public:

		Array(void);
		~Array(void);
		Array(unsigned int MyarraySize);

		Array(const Array &obj1);
		Array &operator=(const Array &obj1);

		unsigned int size(void) const;
		T1 &operator[](unsigned int index1) const;
		
		
	private:
		unsigned int MyarraySize;
		T1 *Myarray;
	
	protected:
		// std::string type;
};

// std::ostream &operator<<(std::ostream &out1, Array const &obj1);



 
// Print messages
void showCaseArray(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSizeAn, '-')<< std::endl ;
        std::cout << "\033[32m-> Array Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR1;
    else if (i1==2)
        std::cout << STR2;
    else if (i1==3)
        std::cout << STR3;
    else if (i1==4)
        std::cout << STR4;
	else if (i1==6)
		std::cout << STR6;

    
}



// Default constructor
template <typename T1>
Array<T1>::Array(): MyarraySize(0), Myarray(NULL) {
	showCaseArray(0);
	showCaseArray(1);
}

// Default constructor with array and size
template <typename T2>
Array<T2>::Array(unsigned int MyarraySize2): MyarraySize(MyarraySize2), Myarray(new T2[MyarraySize2]) {
	showCaseArray(0);
	showCaseArray(6);
}

// Copy constructor
template <typename T3>
Array<T3>::Array(const Array &obj1) : MyarraySize(obj1.MyarraySize)
{
	showCaseArray(0);
	showCaseArray(2);
	Myarray = new T3[MyarraySize];
	// for (unsigned int i = 0; i < MyarraySize; i++)
	// 	Myarray[i] = obj1.Myarray[i];
	*this = obj1;
}

// Destructor
template <typename T4>
Array<T4>::~Array() {
	showCaseArray(0);
	showCaseArray(3);
	if (Myarray != NULL)
		delete[] Myarray;
}

// Assignment operator
template <typename T5>
Array<T5> &Array<T5>::operator=(const Array &obj1) {
	showCaseArray(0);
	showCaseArray(4);
	if (this != &obj1)
	{
		if (Myarray != NULL)
			delete[] Myarray;
		MyarraySize = obj1.MyarraySize;
		Myarray = new T5[MyarraySize];
		// for (unsigned int i = 0; i < MyarraySize; i++)
		// 	Myarray[i] = obj1.Myarray[i];
		memcpy(Myarray, obj1.Myarray, MyarraySize * sizeof(T5));
	}
	return *this;
}

// Setters and Getters

// size function
template <typename T6>
unsigned int Array<T6>::size(void) const {
	return MyarraySize;
}

// operator[] function
template <typename T7>
T7 &Array<T7>::operator[](unsigned int index1) const {
	if (index1 >= MyarraySize)
		throw std::out_of_range("\033[31m The Index you enterd is out of range.\033[0m\n");
	return Myarray[index1];
}

#endif


