#include <iostream>

struct Data
{
	std::string str;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data data;
    data.str = "Hello, world!";

    uintptr_t serialized = serialize(&data);
    std::cout << "Adresse sérialisée : " << serialized << std::endl;

    Data* deserialized = deserialize(serialized);
    std::cout << "Contenu désérialisé : " << deserialized->str << std::endl;

    return 0;
}