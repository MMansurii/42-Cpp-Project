

#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <list>
#include <stdexcept>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>

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



class RPN {
	
		
	public:

	
		RPN(void);
		~RPN(void);
		// RPN(unsigned int MyNum1);


		RPN(const RPN &obj1);
		RPN &operator=(const RPN &obj1);
		// Setters and Getters
		std::stack<double> getMyStack1() const;
		void setMyStack1(std::stack<double> MyStack1);

		//////////
		int check_operator(const std::string &str1);
		double do_one_calc(double al, double ar, const std::string &op1);
		int check_read_number(const std::string &str1);
		void do_one_token(const std::string &token1);
		double calcrpn(const std::string &input1);
				
	private:
		std::stack<double> MyStack1;	
	
	
	protected:
		// std::string type;
};

// std::ostream &operator<<(std::ostream &out1, RPN const &obj1);

#endif

