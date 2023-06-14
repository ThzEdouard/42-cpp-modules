#include <iostream>
#include "Array.hpp"

int main()
{
    // Construction with no parameter
    Array<int> emptyArray;
    std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

    // Construction with unsigned int n as a parameter
    Array<int> intArray(5);
    std::cout << "Size of intArray: " << intArray.size() << std::endl;
    for (unsigned int i = 0; i < intArray.size(); ++i)
        std::cout << "intArray[" << i << "]: " << intArray[i] << std::endl;

    // Construction by copy
    Array<int> copiedArray(intArray);
    std::cout << "Size of copiedArray: " << copiedArray.size() << std::endl;
    for (unsigned int i = 0; i < copiedArray.size(); ++i)
        std::cout << "copiedArray[" << i << "]: " << copiedArray[i] << std::endl;

    // Assignment operator
    Array<int> assignedArray;
    assignedArray = intArray;
    std::cout << "Size of assignedArray: " << assignedArray.size() << std::endl;
    for (unsigned int i = 0; i < assignedArray.size(); ++i)
        std::cout << "assignedArray[" << i << "]: " << assignedArray[i] << std::endl;

    try
    {
        // Accessing out-of-range index
        std::cout << "Accessing out-of-range index: ";
        std::cout << intArray[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}