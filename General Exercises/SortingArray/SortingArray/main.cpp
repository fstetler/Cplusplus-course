#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };

	// Sorting the array for length of array number of times
	for (int k{ 0 }; k < size(array); ++k) {
		for (int i{ 0 }; i < size(array) - 1; ++i) {
			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
			}
		}
	}

	// Prints out the new sorted array
	for (int i{ 0 }; i < size(array); ++i) {
		cout << array[i] << " ";
	}

	return 0;
}

