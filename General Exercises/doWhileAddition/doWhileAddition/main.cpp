#include<iostream>
#include<string>
using namespace std;

int main() {
	int selection;

	do {
		cout << "Please make a selection: " << "\n";
		cout << "1) Addition\n";
		cout << "2) Subtraction\n";
		cout << "3) Multiplication\n";
		cout << "4) Division\n";
		cin >> selection;
	} while (selection != 1 && selection != 2 &&
		selection != 3 && selection != 4);
	cout << "You selected option #" << selection << "\n";

	return 0;
}