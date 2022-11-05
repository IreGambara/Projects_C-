#include "Serialization.hpp"

int main(void)
{
	Data igambara;

	igambara.name = "Igambara";
	igambara.age = 23;

	uintptr_t out = serialize(&igambara);

	Data *data = deserialize(out);

	std::cout << "Name: " << data->name << std::endl;
	std::cout << "Age: " << data->age << std::endl;
}