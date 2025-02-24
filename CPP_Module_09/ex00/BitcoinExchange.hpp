

#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

#include <map>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

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

// #ifndef Strhigh
// # define Strhigh "\033[35m -> 💀 Grade is too high!\033[0m\n"
// #endif

// #ifndef Strlow
// # define Strlow "\033[35m -> 💀 Grade is too low!\033[0m\n"
// #endif

// #ifndef STDAnS
// # define STDAnS "\033[32m  , grade is: \033[0m"
// #endif


class BitcoinExchange {
	public:
		
		BitcoinExchange(void);
		~BitcoinExchange(void);
		// BitcoinExchange(std::string Myname, int Mygrade);
		// BitcoinExchange(std::string Myname);
		// BitcoinExchange(int Mygrade);

		BitcoinExchange(const BitcoinExchange &obj1);
		BitcoinExchange &operator=(const BitcoinExchange &obj1);
		int read_database();
		int check_in_database(double value1 , std::string date1);
		
	private:
		std::map<std::string, double> MyMap1;
	
	protected:

};



#endif

