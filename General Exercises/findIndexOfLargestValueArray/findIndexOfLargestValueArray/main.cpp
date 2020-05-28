#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<array>
#include<vector>
#include<iterator>
#include<numeric>
using namespace std;

int	getIndexOfLargestValue(int* array, int arraySize) {
	int largestValue{ 0 };

	for (int i{ 0 }; i < arraySize; ++i) {
		if (array[i] > largestValue) {
			largestValue = array[i];
		}
	}
	if (array[arraySize - 1] > largestValue) {
		largestValue = array[arraySize - 1];
	}
	for (int i{ 0 }; i < arraySize; ++i) {
		if (largestValue == array[i]) {
			return i;
		}
	}
}

int main() {

	int array[]{ 5,2,12,3,9,4 };
	int arraySize{ size(array) };
	cout << getIndexOfLargestValue(array, arraySize);

	return 0;
}