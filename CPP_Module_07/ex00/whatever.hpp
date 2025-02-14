

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// #include <string>
// #include <iostream>
// #include <stdint.h>	// uintptr_t -std=c++98
//#include <cstdint>	// uintptr_t -std=c++11

// # ifndef LineSizeAn
// #  define LineSizeAn 66
// # endif
// # ifndef STR1
// #  define STR1 "\033[32mDefault constructor called\033[0m\n"
// # endif
// # ifndef STR2
// #  define STR2 "\033[32mCopy constructor called\033[0m\n"
// # endif
// # ifndef STR3
// #  define STR3 "\033[32mDestructor called\033[0m\n"
// # endif
// # ifndef STR4
// #  define STR4 "\033[32mCopy assignment operator called\033[0m\n"
// # endif

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

// • swap: Swaps the values of two given arguments. Does not return anything.
template <typename T0>
void swap(T0 &first, T0 &second) {
	T0 temp0 = first;
	first = second;
	second = temp0;
}

// • min: Compares the two values passed in its arguments and returns the smallest
//     one. If the two of them are equal, then it returns the second one.
template <typename T1>
T1 min(T1 first, T1 second) {
	return (first < second ? first : second);
}

// • max: Compares the two values passed in its arguments and returns the greatest one.
//      If the two of them are equal, then it returns the second one.
template <typename T2>
T2 max(T2 first, T2 second) {
	return (first > second ? first : second);
}

#endif

