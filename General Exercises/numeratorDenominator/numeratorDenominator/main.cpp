#include<iostream>
#include<string>
#include<list>
#include<vector>
using namespace std;

struct Values {
	int numerator;
	int denominator;
};

Values getInput() {
	Values temp{};
	cout << "Write the numerator: " << "\n";
	cin >> temp.numerator;
	cout << "Write the denominator: " << "\n";
	cin >> temp.denominator;
	cout << "\n";
	return temp;
}

void multiply(Values fraction1, Values fraction2) {
	cout << "The fraction of the two values are " << static_cast<double>(fraction1.numerator * fraction2.numerator) / (fraction1.denominator * fraction2.denominator) << "\n";
}

int main() {

	Values fraction1{ getInput() };
	Values fraction2{ getInput() };

	multiply(fraction1, fraction2);

	return 0;
}


