#include<iostream>
using namespace std;


int main() {
	
	cout << "Enter an integer: " << "\n";
	double smaller{};
	cin >> smaller;
	
	cout << "Enter a larger integer: " << "\n";
	double larger{};
	cin >> larger;

	if (larger < smaller) {
		cout << "Swapping the values." << "\n";
		double newSmaller{ larger };
		double newLarger{ smaller };
	
		cout << "The smaller value is " << newSmaller << "\n";
		cout << "The larger value is " << newLarger << "\n";
	}
	else {
		cout << "The smaller value is " << smaller << "\n";
		cout << "The larger value is " << larger << "\n";
	}

	return 0;

}



