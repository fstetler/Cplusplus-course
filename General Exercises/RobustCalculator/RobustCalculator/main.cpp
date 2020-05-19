// Making a robust calculator with lots of cin safes
#include<iostream>
using namespace std;

double getValue() {
	while (true) {
		cout << "Input a double value: " << "\n";
		double value{};
		cin >> value;
		
		if (cin.fail()) {
			cin.clear(); // Puts us back in "normal" operating mode
			cin.ignore(32767, '\n'); // Remove the bad input
			cout << "Oops, the input is invalid. Please try again. " << "\n";
		}
		else {
			cin.ignore(32767, '\n');

			return value;
		}
	}
}

char getOperator() {
	while (true) {
		cout << "Enter one of the following: +, -, *, or /: " << "\n";
		char op;
		cin >> op;

		cin.ignore(32767, '\n');

		if (op == '+' || op == '-' || op == '*' || op == '/') {
			return op;
		}
		else {
			cout << "Oops, that input is not valid. Please try again. " << "\n";
		}
	}
}

void printResult(double value1, char op, double value2) {
	if (op == '+')
		std::cout << value1 << " + " << value2 << " is " << value1 + value2 << '\n';
	else if (op == '-')
		std::cout << value1 << " - " << value2 << " is " << value1 - value2 << '\n';
	else if (op == '*')
		std::cout << value1 << " * " << value2 << " is " << value1 * value2 << '\n';
	else if (op == '/')
		std::cout << value1 << " / " << value2 << " is " << value1 / value2 << '\n';
	else // Being robust means handling unexpected parameters as well, even though getOperator() guarantees op is valid in this particular program
		std::cout << "Something went wrong: printResult() got an invalid operator.";
}

int main() {

	double value1{ getValue() };
	double value2{ getValue() };
	char op{ getOperator() };

	printResult(value1, op, value2);

	return 0;
}