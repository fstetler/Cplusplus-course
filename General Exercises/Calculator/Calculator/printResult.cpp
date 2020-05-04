#include<iostream>
using namespace std;

void printResult(float value1, float value2, char opChoice) {
	if (opChoice == '+')
		cout << value1 << " + " << value2 << " is equal to " << value1 + value2 << "\n";
	else if (opChoice == '-')
		cout << value1 << " - " << value2 << " is equal to " << value1 - value2 << "\n";
	else if (opChoice == '*')
		cout << value1 << " * " << value2 << " is equal to " << value1 * value2 << "\n";
	else if (opChoice == '/')
		cout << value1 << " / " << value2 << " is equal to " << value1 / value2 << "\n";

}