#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<array>
#include<vector>
#include<iterator>
#include<numeric>
#include<list>
using namespace std;

class Values {
public:
	int value1;
	int value2;

	// This is an encapsulated version
	void setValue(int v1) {
		value1 = v1;
	}
	int getValue() {
		return value1;
	}
};

int main() {

	Values values;

	// This is a normal version
	values.value1 = 10;
	cout << values.value1;

	// This is an encapsualted version
	values.setValue(5);
	cout << values.getValue();
	return 0;
}




