#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<array>
#include<vector>
#include<iterator>
#include<numeric>
using namespace std;

// Creating a fibonacci number with N outputs

int getLength() {
	cout << "How long do you want the fibonacci array to be?: ";
	int length{};
	cin >> length;
	return length;
}

void printFibonacci(int* fibArray, int length) {
	if (length == 1) {
		cout << fibArray[0];
	}
	else if (length == 2) {
		for (int i{ 0 }; i < 2; ++i) {
			cout << fibArray[i] << " ";
		}
	}
	else {
		for (int i{ 2 }; i < length; ++i) {
			fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
		}
		for (int i{ 0 }; i < length; ++i) {
			cout << fibArray[i] << " ";
		}
	}
}

int main() {

	int length{ getLength() };
	int* fibArray{ new int[length] };
	fibArray[0] = 0;
	fibArray[1] = 1;

	printFibonacci(fibArray, length);

	return 0;
}







