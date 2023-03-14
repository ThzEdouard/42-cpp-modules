#include <iostream>
#include "Fixed.hpp"
# define END    "\x1b[0m"
# define GREY   "\x1b[30m"
# define RED    "\x1b[31m"
# define GREEN  "\x1b[32m"
# define YELOW  "\x1b[33m"
# define BLUE   "\x1b[34m"
# define PURPLE "\x1b[35m"
# define CYAN   "\x1b[36m"
# define WHITE  "\x1b[37m"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}/*
static void print_msg(std::string color, std::string msg)
{
    std::cout << color << msg << END << std::endl;
}

int main(void)
{
    Fixed a(-10);
    Fixed b(0);
    Fixed c(42.42f);
    Fixed d(42);
        // bool comparator
    print_msg(YELOW, "test with ==");
    std::cout << "between a and b   " << (a == b) << std::endl;
    std::cout << "between b and b   " << (b == b) << std::endl;
    std::cout << "between c and b   " << (c == b) << std::endl;
    std::cout << "between c and d   " << (c == d) << std::endl;

    print_msg(YELOW, "test with !=");
    std::cout << "between a and b   " << (a != b) << std::endl;
    std::cout << "between b and b   " << (b != b) << std::endl;
    std::cout << "between c and b   " << (c != b) << std::endl;
    std::cout << "between c and d   " << (c != d) << std::endl;

    print_msg(YELOW, "test with <=");
    std::cout << "between a and b   " << (a <= b) << std::endl;
    std::cout << "between b and b   " << (b <= b) << std::endl;
    std::cout << "between c and b   " << (c <= b) << std::endl;
    std::cout << "between c and d   " << (c <= d) << std::endl;

    print_msg(YELOW, "test with >=");
    std::cout << "between a and b   " << (a >= b) << std::endl;
    std::cout << "between b and b   " << (b >= b) << std::endl;
    std::cout << "between c and b   " << (c >= b) << std::endl;
    std::cout << "between c and d   " << (c >= d) << std::endl;

    print_msg(YELOW, "test with <");
    std::cout << "between a and b   " << (a < b) << std::endl;
    std::cout << "between b and b   " << (b < b) << std::endl;
    std::cout << "between c and b   " << (c < b) << std::endl;
    std::cout << "between c and d   " << (c < d) << std::endl;

    print_msg(YELOW, "test with >");
    std::cout << "between a and b   " << (a > b) << std::endl;
    std::cout << "between b and b   " << (b > b) << std::endl;
    std::cout << "between c and b   " << (c > b) << std::endl;
    std::cout << "between c and d   " << (c > d) << std::endl;


        // operator test
    b = 1;
    print_msg(YELOW, "test with +");
    std::cout << "a + b (a=" << a << "b=" << b << ")  " << (a + b) << std::endl;
    std::cout << "b + b (b=" << b << ") " << (b + b) << std::endl;
    std::cout << "c + b (c=" << c << "b=" << b << ")  " << (c + b) << std::endl;

    print_msg(YELOW, "test with -");
    std::cout << "a - b (a=" << a << "b=" << b << ")  " << (a - b) << std::endl;
    std::cout << "b - b (b=" << b << ") " << (b - b) << std::endl;
    std::cout << "c - b (c=" << c << "b=" << b << ")  " << (c - b) << std::endl;

    b = 0.5f;
    print_msg(YELOW, "test with /");
    std::cout << "a / b (a=" << a << "b=" << b << ")  " << (a / b) << std::endl;
    std::cout << "b / b (b=" << b << ") " << (b / b) << std::endl;
    std::cout << "c / b (c=" << c << "b=" << b << ")  " << (c / b) << std::endl;

    print_msg(YELOW, "test with *");
    std::cout << "a * b (a=" << a << "b=" << b << ")  " << (a * b) << std::endl;
    std::cout << "b * b (b=" << b << ") " << (b * b) << std::endl;
    std::cout << "c * b (c=" << c << "b=" << b << ")  " << (c * b) << std::endl;


        // increment/decrement test
    print_msg(YELOW, "test with ++a");
    std::cout << "old a : " << a
       << " during operation : " << ++a
       << " after operation :" << a << std::endl;

    print_msg(YELOW, "test with a++");
    std::cout << "old a : " << a
        << " during operation :" << a++
        << " after operation :" << a << std::endl;

    print_msg(YELOW, "test with --a");
    std::cout << "old a : " << a
       << " during operation : " << --a
       << " after operation :" << a << std::endl;

    print_msg(YELOW, "test with a--");
    std::cout << "old a : " << a
        << " during operation :" << a--
        << " after operation :" << a << std::endl;


        // min/max overload
    print_msg(YELOW, "test max");
    std::cout << "max between a and b : " << Fixed::max(a, b) << std::endl;
    print_msg(YELOW, "test min");
    std::cout << "min between a and b : " << Fixed::min(a, b) << std::endl;

    const Fixed e(10);
    const Fixed f(20);

    print_msg(YELOW, "test max with const");
    std::cout << "max between a and b : " << Fixed::max(e, f) << std::endl;
    print_msg(YELOW, "test min with const");
    std::cout << "min between a and b : " << Fixed::min(e, f) << std::endl;

    return (0);
}*/