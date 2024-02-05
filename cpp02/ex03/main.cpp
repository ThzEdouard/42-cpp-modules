#include "Point.hpp"

# define END    "\x1b[0m"
# define GREY   "\x1b[30m"
# define RED    "\x1b[31m"
# define GREEN  "\x1b[32m"
# define YELOW  "\x1b[33m"
# define BLUE   "\x1b[34m"
# define PURPLE "\x1b[35m"
# define CYAN   "\x1b[36m"
# define WHITE  "\x1b[37m"

int main(void)
{
    const Point A(1, 2);
    const Point B(1, 6);
    const Point C(4, 4);
    const Point D1(2, 4);
    const Point D2(2, 1);

    std::cout << YELOW << "Check if D1 is D2 are in the triangle" << END << std::endl;
    ((bsp(A, B, C , D1)) ? std::cout << GREEN << "D1 is in a triangle !" << END << std::endl : std::cout << RED << "D1 is not in a triangle !" << END <<std::endl);
    ((bsp(A, B, C , D2)) ? std::cout << GREEN << "D2 is in a triangle !" << END << std::endl : std::cout << RED << "D2 is not in a triangle !" << END <<std::endl);
}
