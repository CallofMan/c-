#include <iostream>
#include <string>

enum class Animal
{
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH,
};

std::string getAnimalName(Animal animal)
{
	switch (animal)
	{
		case Animal::PIG:
			return "pig";
		case Animal::CAT:
			return "cat";
		case Animal::DOG:
			return "dog";
		case Animal::CHICKEN:
			return "chicken";
		case Animal::GOAT:
			return "goat";
		case Animal::OSTRICH:
			return "ostrich";
		default: 
			return "unknown";
	}
}

void printNumberOfLegs(Animal animal)
{
	using namespace std;

	cout << "A " << getAnimalName(animal) << " has ";

	switch (animal)
	{
		case Animal::CAT:
		case Animal::DOG:
		case Animal::GOAT:
		case Animal::PIG:
			cout << 4 << " legs." << endl;
			break;
		case Animal::CHICKEN:
		case Animal::OSTRICH:
			cout << 2 << " legs." << endl;
			break;
		default: cout << "unknown legs." << endl;
	}
}

int main()
{
	printNumberOfLegs(Animal::PIG);
	printNumberOfLegs(Animal::CHICKEN);

	return 0;
}
