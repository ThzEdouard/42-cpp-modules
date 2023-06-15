#include "Serializer.hpp"

int main()
{
    Data data;
    data.str = "Hello, world!";

    uintptr_t serialized = Serializer::serialize(&data);
    std::cout << "Adresse sérialisée : " << serialized << std::endl;

    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Contenu désérialisé : " << deserialized->str << std::endl;

    return 0;
}