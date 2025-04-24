#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    if (this == &copy)
        return (*this);
    return (*this);
}

void    ScalarConverter::convertChar(char c)
{
    if (isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}


void ScalarConverter::convertInt(int i)
{
    int asInt;
    
    asInt = static_cast<int>(i);
    std::cout << "char: ";
    if (asInt >=0 && asInt <= 127 && isprint(asInt))
        std::cout << "'" << static_cast<char>(asInt) << "'" << std::endl;
    else if (asInt < 0 || asInt > 127)
        std::cout << "Overflow" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    if (i > INT_MAX || i < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
    {
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    }
}


void ScalarConverter::convertFloat(float f)
{
    int asInt;
    
    asInt = static_cast<int>(f);
    std::cout << "char: ";
    if (asInt >=0 && asInt <= 127 && isprint(asInt))
        std::cout << "'" << static_cast<char>(asInt) << "'" << std::endl;
    else if (f == INFINITY || f == -INFINITY || std::isnan(f))
        std::cout << "impossible" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    
    std::cout << "int: ";
    if (f > INT_MAX || f < INT_MIN || std::isnan(f) || std::isinf(f))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(f) << std::endl;

    std::cout << "float: ";
    if (f - static_cast<int>(f) == 0)
        std::cout << f << ".0f" << std::endl;
    else
        std::cout << f << "f" << std::endl;

    std::cout << "double: ";
    if (f - static_cast<int>(f) == 0)
        std::cout << f << ".0" << std::endl;
    else
        std::cout << f << std::endl;
}
// void   ScalarConverter::convertDouble(double d)

void ScalarConverter::convertDouble(double d)
{
    int asInt;
    
    asInt = static_cast<int>(d);
    std::cout << "char: ";
    if (asInt >=0 && asInt <= 127 && isprint(asInt))
        std::cout << "'" << static_cast<char>(asInt) << "'" << std::endl;
    else if (d == INFINITY || d == -INFINITY || std::isnan(d))
        std::cout << "impossible" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;

    std::cout << "int: ";
    if (d > INT_MAX || d < INT_MIN || std::isnan(d) || std::isinf(d))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(d) << std::endl;

    std::cout << "float: ";
    if (d > FLT_MAX || d < -FLT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<float>(d) << "f" << std::endl;

    std::cout << "double: " << d << std::endl;
}

std::string type_id(const std::string &literal, t_type &t)
{
    std::istringstream iss(literal);
    size_t len;
    
    if (literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
        return ("char");
    iss >> t.i;
    if (!iss.fail() && iss.eof())
        return ("int");
    iss.clear();
    len = literal.length();
    if (len > 1 && literal[len - 1] == 'f')
    {
        iss.str(literal.substr(0, len - 1));
        iss >> t.f;
        if (!iss.fail() || iss.eof())
            return ("float");
    }
    iss.clear();
    iss.str(literal);
    iss >> t.d;
    if (!iss.fail() || iss.eof())
        return ("double");
    return ("unknown");
}

void    ScalarConverter::convert(const std::string &str)
{
    ScalarConverter sc;
    t_type          t;
    std::string type;
    
    type = type_id(str, t);
    // check if str is a char
    if (type == "char")
        sc.convertChar(str[0]);
    // check if str is an int
    if (type == "int")
        sc.convertInt(t.i);
    // check if str is a float
    if (type == "float")
        sc.convertFloat(t.f);
    // check if str is a double
    if (type == "double")
        sc.convertDouble(t.d);
    // check if str is unknown
    if (type == "unknown")
        std::cout << "Error: unknown type" << std::endl;

}