#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
	Data data;

	data.id = 42;
	data.name = "Oussama";
	data.value = 1337.42;

	Data* original = &data;

	uintptr_t raw = Serializer::serialize(original);
	Data* result = Serializer::deserialize(raw);

	std::cout << "Original pointer:     " << original << std::endl;
	std::cout << "Serialized value:     " << raw << std::endl;
	std::cout << "Deserialized pointer: " << result << std::endl;

	std::cout << std::endl;

	if (original == result)
		std::cout << "Success: pointers are equal" << std::endl;
	else
		std::cout << "Error: pointers are different" << std::endl;

	std::cout << std::endl;

	std::cout << "Data content after deserialization:" << std::endl;
	std::cout << "id: " << result->id << std::endl;
	std::cout << "name: " << result->name << std::endl;
	std::cout << "value: " << result->value << std::endl;

	return 0;
}