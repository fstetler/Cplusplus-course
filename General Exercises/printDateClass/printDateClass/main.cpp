#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<array>
#include<vector>
#include<iterator>
#include<numeric>
using namespace std;

class dateClass {
public:
	int year;
	int month;
	int day;

	void printDate() {
		cout << year << "/" << month << "/" << day;
	}
};

int main() {

	dateClass date{ 2020,05,27 };

	date.printDate();

	date.day = 30;

	cout << "\n";
	cout << "New date is: ";
	date.printDate();

	return 0;
}

