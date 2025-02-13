

// Main points:
// static before a function in a class → Makes the function belong to the class itself,
//        not any specific object. It can be called without creating an instance.

// uintptr_t → An unsigned integer type that is guaranteed to be large enough to hold a pointer.
//        Used for safely storing or transmitting pointers as numbers.

// reinterpret_cast → A low-level type conversion that allows casting between unrelated types,
//        such as pointers to integers or different pointer types. It is unsafe and should be used with caution.

#include "Serializer.hpp"

int main()
{
    Data first;
    first.MyName1 = "Michael Novokovich";
    first.MyGrade1 = 17;
    first.IsGraduated = false;
    first.next = NULL; //-std=c++98
    // first.next = nullptr; //-std=c++11

    uintptr_t raw = Serializer::serialize(&first);
    Data *second = Serializer::deserialize(raw);

    std::cout << "First:  " << first.MyName1 << " " << first.MyGrade1 << " " << first.IsGraduated << std::endl;
    std::cout << "Second: " << second->MyName1 << " " << second->MyGrade1 << " " << second->IsGraduated << std::endl;
    return 0;
}
    