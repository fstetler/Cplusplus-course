#include<iostream>
#include<string>
using namespace std;

int valuePick() {
	cout << "Input a value: " << "\n";
	int input{};
	cin >> input;
	return input;
}


char operatorPick() {
	cout << "Choose an operator (+, -, *, /, or %): " << "\n";
	char op{};
	cin >> op;
	return op;
}

void printResult(int value1, int value2, char opchoice) {
	switch (opchoice) {
	case '+':
		cout << value1 << " + " << value2 << " = " << value1 + value2 << "\n";
		break;
	case '-':
		cout << value1 << " - " << value2 << " = " << value1 - value2 << "\n";
		break;
	case '*':
		cout << value1 << " * " << value2 << " = " << value1 * value2 << "\n";
		break;
	case '/':
		cout << value1 << " / " << value2 << " = " << value1 / value2 << "\n";
		break;
	case '%':
		cout << value1 << " % " << value2 << " = " << value1 % value2 << "\n";
		break;
	}
}

int main() {
	int value1{ valuePick() };
	int value2{ valuePick() };
	char opchoice{ operatorPick() };

	printResult(value1, value2, opchoice);

	return 0;
}

