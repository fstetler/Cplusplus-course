#include<iostream>
#include<string>
using namespace std;

enum class Animal {
	pig,
	chicken,
	goat,
	cat,
	dog,
	ostrich
};

string getAnimalName(Animal choice) {
	switch (choice) {
	case Animal::pig:
		return "pig";
	case Animal::chicken:
		return "chicken";
	case Animal::goat:
		return "goat";
	case Animal::cat:
		return "cat";
	case Animal::dog:
		return "dog";
	case Animal::ostrich:
		return "ostrich";
	}
}

string printNumberOfLegs(Animal choice) {
	switch (choice) {
	case Animal::pig:
		return "4";
	case Animal::chicken:
		return "2";
	case Animal::goat:
		return "4";
	case Animal::cat:
		return "4";
	case Animal::dog:
		return "4";
	case Animal::ostrich:
		return "2";
	}
}

void printResults(Animal choice) {
	cout << "A " << getAnimalName(choice) << " has " << printNumberOfLegs(choice) << " legs." << "\n";
}

int main() {

	Animal choiceCat{ Animal::cat };
	Animal choiceChicken{ Animal::chicken };

	printResults(choiceCat);
	printResults(choiceChicken);

	return 0;
}
