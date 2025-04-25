

// Main points:
// static before a function in a class → Makes the function belong to the class itself,
//        not any specific object. It can be called without creating an instance.

// uintptr_t → An unsigned integer type that is guaranteed to be large enough to hold a pointer.
//        Used for safely storing or transmitting pointers as numbers.

// reinterpret_cast → A low-level type conversion that allows casting between unrelated types,
//        such as pointers to integers or different pointer types. It is unsafe and should be used with caution.

# include "Serializer.hpp"

int main()
{
    Data data(27, 1.78, "Mohamad");
    
    uintptr_t serialized = Serializer::serialize(&data);
    Data *deserialized = Serializer::deserialize(serialized);
    
    if (deserialized == &data)
        std::cout << "Deserialization successful. Pointers are equal." << std::endl;
    else
        std::cout << "Deserialization failed. Pointers are not equal." << std::endl;
    deserialized->printData();
    return (0);
}