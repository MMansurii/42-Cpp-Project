

#ifndef PmergeMe_HPP
#define PmergeMe_HPP


#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <chrono>
#include <cstdlib>
#include <cctype>
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <stdexcept>
#include <iterator>
#include <fstream>
#include <map>

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



class PmergeMe {
	public:
		
		PmergeMe(void);
		~PmergeMe(void);

		PmergeMe(const PmergeMe &obj1);
		PmergeMe &operator=(const PmergeMe &obj1);

		int check_args(int argc, char** argv);
		int check_positive_int(const std::string &str1);
		int read_args_vector(int argc, char** argv, std::vector<int>& MyVector1);
		int read_args_deque(int argc, char** argv, std::deque<int>& MyDeque1);
		void show_origin_vec(std::vector<int>& Myyvector1);
		void sortVector(std::vector<int>& Myvec1);
		void ft_insertVect(std::vector<int>& sorted, int value);
		void algofordJohnsonVect(std::vector<int>& v);
		void sortDeque(std::deque<int>& Mydeq1);
		void insertDeque(std::deque<int>& sorted, int value);
		void algofordJohnsonDeq(std::deque<int>& d);
		std::chrono::duration<double, std::micro> do_sort4vec(std::vector<int> &MyVector1 , PmergeMe &MySort1);
		std::chrono::duration<double, std::micro> do_sort4deq(std::deque<int> &MyDeque1 , PmergeMe &MySort1);
		void show_sorted_vec(std::vector<int>& Myyvector1);
		static void show_comparison(std::size_t MyvectorSize, const std::chrono::duration<double, std::micro> &vectime,
			std::size_t MydequeSize, const std::chrono::duration<double, std::micro> &deqtime);
		int run_with_class(int argc, char** argv);

		
		
	private:
		// std::de
	
	protected:
		// std::string type;
};

// std::ostream &operator<<(std::ostream &out1, PmergeMe const &obj1);

#endif

