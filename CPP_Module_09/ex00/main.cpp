#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include "BitcoinExchange.hpp"



int check_args_number(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr <<"\033[31m💀Error: Number of argument is incorrect,\033[0m\n";
        std::cerr <<"\033[32m✅Usage: " << argv[0]<< " <input file> \033[0m\n" ;
        return 0;
    }
    return 1;
}

 // check if the separator is correct
 int check_separator(char separator)
 {
     if (separator != '|')
     {
         std::cerr <<"\033[31m💀Error: Invalid input (Invalid separator)\033[0m\n";
         return 0;
     }
     return 1;
 }

 // check if the price is valid
    int check_price(double price)
    {
        if (price <= 0)
        {
            std::cerr <<"\033[31m💀Error: Invalid input (Invalid NEGATIVE price)\033[0m\n";
            return 0;
        }
        if (price > 1000)
        {
            std::cerr <<"\033[31m💀Error: Invalid input (Price is too high)\033[0m\n";
            return 0;
        }
        return 1;
    }

    
    // check if the length of date is valid
    int check_date_length(std::string date)
    {
        if (date.size() != 10)
        {
            std::cerr <<"\033[31m 💀Error: Invalid input (Invalid date)\033[0m\n";
            return 0;
        }
        if (date[4] != '-' || date[7] != '-')
        {
            std::cerr <<"\033[31m 💀Error: Invalid input (Invalid date)\033[0m\n";
            return 0;
        }
        return 1;
    }

    // check if the year is valid
    int check_year(std::string date)
    {
        int year1 = std::stoi(date.substr(0, 4));
        if (year1 < 2008)
        {
            std::cerr <<"\033[31m 💀Error: Invalid input (Invalid year)\033[0m\n";
            return 0;
        }
        return 1;
    }

    // check if the month is valid
    int check_month(std::string date)
    {
        int month1 = std::stoi(date.substr(5, 2));
        if (month1 < 1 || month1 > 12)
        {
            std::cerr <<"\033[31m 💀Error: Invalid input (Invalid month)\033[0m\n";
            return 0;
        }
        return 1;
    }

    // check leap year
    int check_leap_year(int year)
    {
        if (year % 4 == 0)
        {
            if (year % 100 != 0 || year % 400 == 0)
                return 1;
        }
        return 0;
    }

    // check if the day is valid
    int check_day(std::string date)
    {
        int year1 = std::stoi(date.substr(0, 4));
        int month1 = std::stoi(date.substr(5, 2));
        int day1 = std::stoi(date.substr(8, 2));
        if (day1 < 1 || day1 > 31)
        {
            std::cerr <<"\033[31m 💀Error: Invalid input (Invalid day)\033[0m\n";
            return 0;
        }
        // leap year
        if (month1 == 2 && check_leap_year(year1))
        {
            if (day1 > 29)
            {
                std::cerr <<"\033[31m 💀Error: Invalid input (Invalid day)\033[0m\n";
                return 0;
            }
        }
        // not leap year    
        else if (month1 == 2 && !check_leap_year(year1))
        {
            if (day1 > 28)
            {
                std::cerr <<"\033[31m 💀Error: Invalid input (Invalid day)\033[0m\n";
                return 0;
            }
        }
        // 30 days months
        else if ((month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11) && day1 > 30)
        {
            std::cerr <<"\033[31m 💀Error: Invalid input (Invalid day)\033[0m\n";
            return 0;
        }
        return 1;
        
    }
    
 

// read database file
int BitcoinExchange::read_database()
{
    std::ifstream file0("data.csv");
    if (!file0.is_open())
    {
        std::cerr <<"\033[31m 💀Error: Could not open Database\033[0m\n";
        return 0;
    }
    std::string line0;
    std::string first_line;
    if (!std::getline(file0, first_line))
    {
        std::cerr <<"\033[31m💀Error: Database is empty\033[0m\n";
        file0.close();
        return 0;
    }
    int count1 = 1;
    while (std::getline(file0, line0))
    {
        count1++;
        // std::cout << "Line " << count1 << " \n"; 
        if (line0.empty())
            continue;
        // read every line and check if the date is valid
        std::istringstream iss(line0);// convert the line to a stream
        // 2010-09-13,0.06
        std::string date0;
        //char separator0;
        double price0;
        //iss >> date0 >> separator0 >> price0;
        if (iss.fail())
        {
            std::cerr <<"\033[31m💀Error: Invalid input format for data base, not recognized\033[0m\n";
            return 0;
        }
        // check if the separator is correct
        if (std::getline(iss, date0, ',') && iss>>price0)
        {
            MyMap1[date0] = price0;
        }
        else
        {
            std::cerr <<"\033[31m 💀Error: Invalid input format for data base\033[0m\n";
            file0.close();
            return 0;
        }
    }
    return 1;
}

// check if the date is already in the database
int BitcoinExchange::check_in_database(double value1 , std::string date1)
{
    double price3;
    if (MyMap1.find(date1) != MyMap1.end())
    {
        price3 = MyMap1[date1]*value1;
        std::cout << date1 << " | " << " value: " << value1 << " | " << " price: " << price3 << std::endl;
        return 1;
    }
    else 
    {
        std::map<std::string, double>::iterator it1 = MyMap1.upper_bound(date1);
        if (it1 == MyMap1.begin())
        {
            std::cerr <<"\033[31m 💀Error: Invalid input (Date is not in the database)\033[0m\n";
            return 0;
        }
        it1--;
        price3 = (it1->second) * value1;
        std::cout << date1 << " | " << " value: " << value1 << " | " << " price: " << price3 << std::endl;
        return 1;
    }
}
        


int get_price(std::string inputfile1)
{
    std::ifstream file1(inputfile1);
    if (!file1.is_open())
    {
        std::cerr <<"\033[31m💀Error: Could not open file\033[0m\n";
        return 0;
    }
    std::string line1;

    // read database
    BitcoinExchange obj1;
    if (!obj1.read_database())
        return 0;
    // first line is the header
    // date | value
    if (!std::getline(file1, line1))
    {
        std::cerr <<"\033[31m💀Error: Invalid input format, not recognized\033[0m\n";
        file1.close();
        return 0;
    }

    while (std::getline(file1, line1))
    {
        if (line1.empty())
            continue;
        // read every line and check if the date is valid
        std::istringstream iss(line1);// convert the line to a stream
        // 2011-01-03 | 1.2
        std::string date1;
        char separator1;
        double price1;
        iss >> date1 >> separator1 >> price1;
        if (iss.fail())
        {
            std::cerr <<"\033[31m💀Error: Invalid input format, not recognized.\033[0m\n";
            continue;
        }
        // check if the separator is correct
        if (!check_separator(separator1))
            continue;
        // check if the price is valid
        if (!check_price(price1))
            continue;
        // check if the length of date is valid
        if (!check_date_length(date1))
            continue;
        // check if the year is valid
        if (!check_year(date1))
            continue;
        // check if the month is valid
        if (!check_month(date1))
            continue;
        // check if the day is valid
        if (!check_day(date1))
            continue;
        // check if the date is already in the database
        if (!obj1.check_in_database(price1, date1))
            continue;
    }
    return 1;
}

      

int main(int argc, char **argv)
{
    if (!check_args_number(argc, argv))
        return 1;
    if (!get_price(argv[1]))
        return 1;
    
    return 0;
}