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
}

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	std::cout << "autre "<< std::endl;
// 	std::cout << Fixed::min( a, b ) << std::endl;

// 	a = Fixed(42.42f);

// 	std::cout << "a == b  " << (a == b) << std::endl;
// 	std::cout << "a != b  " << (a != b) << std::endl;
// 	std::cout << "a <= b  " << (a <= b) << std::endl;
// 	std::cout << "a <= b  " << (a >= b) << std::endl;
// 	std::cout << "a < b  " << (a < b) << std::endl;
// 	std::cout << "a > b  " << (a > b) << std::endl;
// 	std::cout << "a + b (a=" << a << "b=" << b << ")  " << (a + b) << std::endl;
// 	std::cout << "a - b (a=" << a << "b=" << b << ")  " << (a - b) << std::endl;
// 	std::cout << "a / b (a=" << a << "b=" << b << ")  " << (a / b) << std::endl;
// 	std::cout << "a * b (a=" << a << "b=" << b << ")  " << (a * b) << std::endl;
// 	std::cout << "a = " << a << ", ++a "<< ++a  << ", a = "<< a << std::endl;
// 	std::cout << "a = " << a << ", a++ "<< a++  << ", a = "<< a << std::endl;
// 	std::cout << "a = " << a << ", --a "<< --a  << ", a = "<< a << std::endl;
// 	std::cout << "a = " << a << ", a-- "<< a--  << ", a = "<< a << std::endl;
// 	std::cout << "max a , b: " << Fixed::max(a, b) << std::endl;
// 	std::cout << "min a , b : " << Fixed::min(a, b) << std::endl;
// return 0;
// }
