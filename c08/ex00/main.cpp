#include "easyfind.hpp"
#include <list>

int main()
{
    std::list<int> myList;
    for (int i = 0; i < 20; ++i) {
        myList.push_back(i * 2); // Remplit la liste avec des valeurs paires
    }

    int target = 25;
    std::list<int>::iterator result = easyfind(myList, target);

    if (result != myList.end()) {
        std::cout << "La valeur " << target << " a été trouvée dans la liste." << std::endl;
    } else {
        std::cout << "La valeur " << target << " n'a pas été trouvée dans la liste." << std::endl;
    }

    return 0;
}