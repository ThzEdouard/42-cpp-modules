#include "iter.hpp"
#include <string>

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

	std::string StringArray[] = {"hello", "bonjour", "Hola", "hey", "bien le bonsoir"};
    size_t StringArrayLength = sizeof(StringArray) / sizeof(StringArray[0]);

    // Call iter with StringArray and printElement function
    std::cout << "StringArray: ";
    iter(StringArray, StringArrayLength, view<std::string>);
    std::cout << std::endl;
    return 0;
}
