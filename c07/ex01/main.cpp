#include "iter.hpp"

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    // Call iter with intArray and printElement function
    std::cout << "intArray: ";
    iter(intArray, intArrayLength, view<int>);
    std::cout << std::endl;

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

    // Call iter with doubleArray and printElement function
    std::cout << "doubleArray: ";
    iter(doubleArray, doubleArrayLength, view<double>);
    std::cout << std::endl;

    return 0;
}
