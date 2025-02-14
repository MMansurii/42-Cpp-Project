

// Main points:

#include "Array.hpp"
#include <iostream>
 int main()
 {
       Array<int> a1(7);
       Array<int> a2(7);
       Array<int> a3(8);
       // show example of elements value before assignment
       std::cout << "Before assignment:" << std::endl;
       for (unsigned int i = 0; i < a1.size(); i++)
       {
              std::cout << "a1[" << i << "] = " << a1[i] << std::endl;
              // std::cout << "a2[" << i << "] = " << a2[i] << std::endl;
              // std::cout << "a3[" << i << "] = " << a3[i] << std::endl;
       }
       // std::cout << "a3[" << a3.size()-1 << "] = " << a3[a3.size()-1] << std::endl;

       // show example of elements value after assignment
       std::cout << "After assignment:" << std::endl;
       unsigned int i1;
       for (i1 = 0; i1 < a1.size(); i1++)
       {
              a1[i1] = i1 + 1;
              std::cout << "a1[" << i1 << "] = " << a1[i1] << std::endl;
              a2[i1] = i1 + 11;
              a3[i1] = i1 + 21;
       }
       a3[i1] = i1 + 21;

       // show example of default constructor
       Array<int> a4;
       std::cout << "a4 size: " << a4.size() << std::endl;

       std::cout << "show example of size() function" << std::endl;
       // show example of constructor with size
       Array<int> a5(7);
       std::cout << "a5 size: " << a5.size() << std::endl;


       // show example of constructor with array and size
       Array<int> a6[]={1,2,3,4,5,6,7};
       // The `sizeof` operator returns the size in bytes of the type or object passed to it.
       std::cout << "a6 size: " << sizeof(a6)/sizeof(a6[0]) << std::endl;


       // show example of size() function
       std::cout << "a1 size: " << a1.size() << std::endl;
       std::cout << "a2 size: " << a2.size() << std::endl;
       std::cout << "a3 size: " << a3.size() << std::endl;
        
       // show example of operator[] function
       std::cout << "show example of operator[] function" << std::endl;
       std::cout << "a1[3]: " << a1[3] << std::endl;
       std::cout << "a2[3]: " << a2[3] << std::endl;
       std::cout << "a3[3]: " << a3[3] << std::endl;

       // show example of error for out of range
       std::cout << "show example of error for out of range" << std::endl;
       try
       {
              std::cout << "a1[8]: " << a1[8] << std::endl;
       }
       catch (std::exception &e)
       {
              std::cout << e.what() << std::endl;
       }

       // show example of assignment operator
       std::cout << "show example of assignment operator  -> a1=a2" << std::endl;
       a1 = a2;
       std::cout << "a1[3]: " << a1[3] << std::endl;
       std::cout << "a2[3]: " << a2[3] << std::endl;

       

       // show example of copy constructor
       std::cout << "show example of copy constructor  -> Array<int> a7(a1)" << std::endl;
       Array<int> a7(a1);
       std::cout << "a7[3]: " << a7[3] << std::endl;
       std::cout << "a1[3]: " << a1[3] << std::endl;

       return 0;
}