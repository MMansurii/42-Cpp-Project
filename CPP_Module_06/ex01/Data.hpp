#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
    private:
        int         age;
        double      height;
        std::string name;
    
    public:
        Data();
        ~Data();
        Data(const Data &copy);
        Data &operator=(const Data &copy);
        Data(int age, double height, std::string name);
        
        void printData() const;
};


#endif