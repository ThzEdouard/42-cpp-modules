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
    // Création d'une instance de t_Data
    Data data;
    data.str = "Hello, world!";

    // Sérialisation de l'instance
    uintptr_t serialized = serialize(&data);

    // Affichage de l'adresse sérialisée
    std::cout << "Adresse sérialisée : " << serialized << std::endl;

    // Désérialisation de l'adresse sérialisée
    Data* deserialized = deserialize(serialized);

    // Vérification du contenu désérialisé
    std::cout << "Contenu désérialisé : " << deserialized->str << std::endl;

    // Libération de la mémoire (si nécessaire)
    // delete deserialized;

    return 0;
}