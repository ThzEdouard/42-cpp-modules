#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

class ScalarConverter
{
private:
    std::string _str;
    char _char;
    int _int;
    float _float;
    double _double;

    bool isChar(const std::string& str)
    {
        return str.length() == 3 && str[0] == '\'' && str[2] == '\'';
    }

    bool isInt(const std::string& str)
    {
        try
        {
            std::stoi(str);
            return true;
        }
        catch (const std::exception&)
        {
            return false;
        }
    }

    bool isFloat(const std::string& str)
    {
        try
        {
            std::stof(str);
            return true;
        }
        catch (const std::exception&)
        {
            return false;
        }
    }

    bool isDouble(const std::string& str)
    {
        try
        {
            std::stod(str);
            return true;
        }
        catch (const std::exception&)
        {
            return false;
        }
    }

public:
    ScalarConverter(const std::string& str) : _str(str), _char(0), _int(0), _float(0), _double(0)
    {
        if (isChar(_str))
        {
            _char = _str[1];
        }
        else if (isInt(_str))
        {
            _int = std::stoi(_str);
        }
        else if (isFloat(_str))
        {
            _float = std::stof(_str);
        }
        else if (isDouble(_str))
        {
            _double = std::stod(_str);
        }
    }

    void convert()
    {
        std::cout << "char: ";
        if (isChar(_str))
        {
            if (std::isprint(_char))
            {
                std::cout << "'" << _char << "'" << std::endl;
            }
            else
            {
                std::cout << "Non displayable" << std::endl;
            }
        }
        else
        {
            std::cout << "impossible" << std::endl;
        }

        std::cout << "int: ";
        if (isInt(_str))
        {
            std::cout << _int << std::endl;
        }
        else
        {
            std::cout << "impossible" << std::endl;
        }

        std::cout << "float: ";
        if (isFloat(_str))
        {
            std::cout << _float << "f" << std::endl;
        }
        else
        {
            std::cout << "impossible" << std::endl;
        }

        std::cout << "double: ";
        if (isDouble(_str))
        {
            std::cout << _double << std::endl;
        }
        else
        {
            std::cout << "impossible" << std::endl;
        }
    }
};

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cout << "Usage: ./convert <literal>" << std::endl;
        return 1;
    }

    std::string literal = argv[1];
    ScalarConverter converter(literal);
    converter.convert();

    return 0;
}
