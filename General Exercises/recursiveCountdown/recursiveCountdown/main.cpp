#include<iostream>
using namespace std;


void recursive(int value) {
	if (value > 0) {
		cout << value << "\n";
		recursive(value - 1);
	}
	if (value == 0) {
		cout << "BLASTOFF!" << "\n";
	}
}


int main() {

	int value{ 5 };
	recursive(value);

	return 0;
}