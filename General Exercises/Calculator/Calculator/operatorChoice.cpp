#include<iostream>
using namespace std;

char operatorChoice() {
	cout << "Please choose between +, -, *, or /: " << "\n";
	char op{};
	cin >> op;
	return op;
}