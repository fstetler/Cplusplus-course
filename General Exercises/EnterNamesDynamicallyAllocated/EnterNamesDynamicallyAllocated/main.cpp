#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
using namespace std;

int numOfNames() {
	cout << "How many people would you like to input?: " << "\n";
	int numOfNames{};
	cin >> numOfNames;

	return numOfNames;
}

void nameChoice(string* nameList, int numberOfNames) {

	cin.ignore();
	for (int i{ 0 }; i < numberOfNames; ++i) {
		cout << "Enter name #" << i + 1 << ": " << "\n";
		getline(cin, nameList[i]);
	}
}

void printNames(string* nameList, int numberOfNames) {
	cout << "These are your names in sorted order: " << "\n";
	for (int i{ 0 }; i < numberOfNames; ++i) {
		cout << "Name #" << i + 1 << ": ";
		cout << nameList[i] << "\n";
	}
}

int main() {

	int numberOfNames{ numOfNames() };

	// Allocate an array to hold the names
	string* nameList{ new string[numberOfNames] };

	cout << "Please input the names of the people, enter in between each name. " << "\n";
	nameChoice(nameList, numberOfNames);

	// sorts the array
	sort(nameList, nameList + numberOfNames);

	printNames(nameList, numberOfNames);

	return 0;
}








