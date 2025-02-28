
#include "PmergeMe.hpp"

// Print messages
void showCasePmergeMe(int i1) 
{
    if (i1 ==0)
    {
        std::cout << std::string(LineSizeAn, '-')<< std::endl ;
        std::cout << "\033[32m-> PmergeMe Class: \033[0m";
    }      
    if (i1==1)
        std::cout << STR1;
    else if (i1==2)
        std::cout << STR2;
    else if (i1==3)
        std::cout << STR3;
    else if (i1==4)
        std::cout << STR4;
}

// Default constructor 
PmergeMe::PmergeMe() {
    // showCasePmergeMe(0);
    // showCasePmergeMe(1);
}


// Copy constructor
PmergeMe::PmergeMe(const PmergeMe &obj1) {
    // showCasePmergeMe(0);
    // showCasePmergeMe(2);
    *this = obj1;
}

PmergeMe::~PmergeMe() {
    // showCasePmergeMe(0);
    // showCasePmergeMe(3);
}

// Copy assignment operator
PmergeMe &PmergeMe::operator=(const PmergeMe &obj1) {
    // showCasePmergeMe(0);
    // showCasePmergeMe(4);
    if (this != &obj1)
    {

    }
    return *this;
}

////////////// functions
int PmergeMe::check_args(int argc, char** argv) {
    (void)argv;
    if (argc == 1) {
        std::cerr <<"\033[31m💀Error: No enough argument!\033[0m\n";
        return 0;
    }
    return 1;
}


int PmergeMe::check_positive_int(const std::string &str1) {
    if (str1.empty())
        return 0;
    for (size_t i1 = 0; i1 < str1.size(); i1++) {
        if (!std::isdigit(str1[i1]))
            return 0;
    }
    return 1;
}


int PmergeMe::read_args_vector(int argc, char** argv, std::vector<int>& MyVector1) 
{
    for (int i1 = 1; i1 < argc; i1++) {
        std::string arg1(argv[i1]);
        if (!PmergeMe::check_positive_int(arg1)) {
            std::cerr << "\033[31m💀Error: Its not a positive integer!\033[0m\n";
            return 0;
        }
        int num1 = std::atoi(arg1.c_str());
        if (num1 <= 0) {
            std::cerr << "\033[31m💀Error: Its not a positive integer!\033[0m\n";
            return 0;
        }
        MyVector1.push_back(num1);
    }
    return 1;
}

int PmergeMe::read_args_deque(int argc, char** argv, std::deque<int>& MyDeque1) 
{
    for (int i1 = 1; i1 < argc; i1++) {
        std::string arg1(argv[i1]);
        if (!PmergeMe::check_positive_int(arg1)) {
            std::cerr << "\033[31m💀Error: Its not a positive integer!\033[0m\n";
            return 0;
        }
        int num1 = std::atoi(arg1.c_str());
        if (num1 <= 0) {
            std::cerr << "\033[31m💀Error: Its not a positive integer!\033[0m\n";
            return 0;
        }
        MyDeque1.push_back(num1);
    }
    return 1;
}


void PmergeMe::show_origin_vec(std::vector<int>& Myvector1) {
    std::cout << "🔀Unsorted array is: \033[31m";
    for (size_t i1 = 0; i1 < Myvector1.size(); i1++) {
        std::cout << Myvector1[i1] << " ";
    }
    std::cout << "\033[0m\n";
}

// ------------------------- vector sorting functions -------------------------
void PmergeMe::sortVector(std::vector<int>& Myvec1) {
    if (Myvec1.size() <= 1)
        return;
    algofordJohnsonVect(Myvec1);
}

void PmergeMe::ft_insertVect(std::vector<int>& sorted, int value1) {
    std::vector<int>::iterator it = std::lower_bound(sorted.begin(), sorted.end(), value1);
    sorted.insert(it, value1);
}

void PmergeMe::algofordJohnsonVect(std::vector<int>& v1) {
    if (v1.size() <= 1)
        return;

    std::vector<int> winners1;
    std::vector<int> losers1;
    size_t i1 = 0;
    while (i1 + 1 < v1.size()) {
        if (v1[i1] < v1[i1+1]) {
            losers1.push_back(v1[i1]);
            winners1.push_back(v1[i1+1]);
        } else {
            losers1.push_back(v1[i1+1]);
            winners1.push_back(v1[i1]);
        }
        i1 += 2;
    }
    if (i1 < v1.size())
        winners1.push_back(v1[i1]);

    // Recursively sort the winners1.
    algofordJohnsonVect(winners1);

    // Insert each loser into the sorted winners1 list.
    for (size_t j1 = 0; j1 < losers1.size(); j1++) {
        ft_insertVect(winners1, losers1[j1]);
    }

    v1 = winners1;
}

// ------------------------- deque sorting functions -------------------------

void PmergeMe::sortDeque(std::deque<int>& Mydeq1) {
    if (Mydeq1.size() <= 1)
        return;
    algofordJohnsonDeq(Mydeq1);
}

void PmergeMe::insertDeque(std::deque<int>& sorted, int value1) {
    std::deque<int>::iterator it = std::lower_bound(sorted.begin(), sorted.end(), value1);
    sorted.insert(it, value1);
}

void PmergeMe::algofordJohnsonDeq(std::deque<int>& deq1) {
    if (deq1.size() <= 1)
        return;

    std::deque<int> winners1;
    std::deque<int> losers1;
    size_t i = 0;
    while (i + 1 < deq1.size()) {
        if (deq1[i] < deq1[i+1]) {
            losers1.push_back(deq1[i]);
            winners1.push_back(deq1[i+1]);
        } else {
            losers1.push_back(deq1[i+1]);
            winners1.push_back(deq1[i]);
        }
        i += 2;
    }
    if (i < deq1.size())
        winners1.push_back(deq1[i]);

    // Recursively sort the winners1.
    algofordJohnsonDeq(winners1);

    // Insert each loser into the sorted winners1 deque.
    for (size_t j1 = 0; j1 < losers1.size(); j1++) {
        insertDeque(winners1, losers1[j1]);
    }
    deq1 = winners1;
}

// Sort vector and measure time.
std::chrono::duration<double, std::micro> PmergeMe::do_sort4vec( std::vector<int> &MyVector1 , PmergeMe &MySort1) 
{
    std::chrono::high_resolution_clock::time_point startVec1 = std::chrono::high_resolution_clock::now();
    MySort1.sortVector(MyVector1);
    std::chrono::high_resolution_clock::time_point endVec2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::micro> vectime = endVec2 - startVec1;
    return vectime;
}

// Sort deque and measure time.
std::chrono::duration<double, std::micro> PmergeMe::do_sort4deq( std::deque<int> &MyDeque1 , PmergeMe &MySort1) 
{
    std::chrono::high_resolution_clock::time_point startDeq1 = std::chrono::high_resolution_clock::now();
    MySort1.sortDeque(MyDeque1);
    std::chrono::high_resolution_clock::time_point endDeq2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::micro> deqtime = endDeq2 - startDeq1;
    return deqtime;
}

void PmergeMe::show_sorted_vec(std::vector<int>& Myyvector1) {
    std::cout << "🔢Sorted array is:   \033[32m";
    for (size_t i1 = 0; i1 < Myyvector1.size(); i1++) {
        std::cout << Myyvector1[i1] << " ";
    }
    std::cout << "\033[0m\n";
}

// Display timing results.
void PmergeMe::show_comparison(std::size_t MyvectorSize, const std::chrono::duration<double, std::micro> &vectime,
    std::size_t MydequeSize, const std::chrono::duration<double, std::micro> &deqtime) {
std::cout << "Time to process a range of " << MyvectorSize
<< " elements with std::vector : ⏱️ \033[32m" << vectime.count() << "\033[0m us" << std::endl;
std::cout << "Time to process a range of " << MydequeSize
<< " elements with std::deque  : ⏱️ \033[32m" << deqtime.count() << "\033[0m us" << std::endl;
}


int PmergeMe::run_with_class(int argc, char** argv) {
    if (!PmergeMe::check_args(argc, argv))
        return 0;
    
    std::vector<int> MyVector1;
    std::deque<int> MyDeque1;

    // Parse and validate arguments
    if (!PmergeMe::read_args_vector(argc, argv, MyVector1))
        return 0;
    if (!PmergeMe::read_args_deque(argc, argv, MyDeque1))
        return 0;

    // Display unsorted 
    PmergeMe::show_origin_vec(MyVector1);

    // Sort and measure time 
    std::chrono::duration<double, std::micro> vectime = PmergeMe::do_sort4vec(MyVector1, *this);
    std::chrono::duration<double, std::micro> deqtime = PmergeMe::do_sort4deq(MyDeque1, *this);
    
    // Display sorted 
    PmergeMe::show_sorted_vec(MyVector1);

    // Display timing results.
    PmergeMe::show_comparison(MyVector1.size(), vectime, MyDeque1.size(), deqtime);

    return 0;
}
