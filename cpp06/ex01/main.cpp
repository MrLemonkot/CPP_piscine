#include <iostream>
#include <stdint.h>

struct Data{
	std::string	name;
	int			age;
} ;

uintptr_t	serialize(Data* ptr) {
	uintptr_t	tmp;
	tmp = reinterpret_cast<uintptr_t>(ptr);
	return tmp;
}

Data*	deserialize(uintptr_t raw) {
	Data	*tmp;
	tmp = reinterpret_cast<Data*>(raw);
	return tmp;
}

int	main(void) {
	Data	elem1;
	elem1.age = 48;
	elem1.name = "Gor";

	uintptr_t	tmp = serialize(&elem1);

	Data	*elem2;
	elem2 = deserialize(tmp);

	std::cout << elem2->age << std::endl;
	std::cout << elem2->name << std::endl;

	return 0;
}

// Сериализация - процесс перевода структуры данных в битовую последовательность.
// reinterpret_cast, для приведения между несвязанными типами, такими как тип указателя и int