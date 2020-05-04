#include<iostream> // Including iostream
#include "Header.h" // Including header which contains the additional functions
using namespace std; // Using namespace standard

int main() {
	
	float value1{ number() }; // Adding first number from the function which asks for input
	float value2{ number() }; // Adding second number from the function which asks for input

	char opChoice{ operatorChoice() }; // Asks which operator the user wants to use

	printResult(value1, value2, opChoice); // Prints the result
	
	return 0; // Return 0 if program runs without fault
}
