#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

int main() {

	int constexpr rowSize{ 10 };
	int constexpr colSize{ 10 };
	int array[rowSize][colSize]{};

	int num{ 0 };
	for (int i{ 0 }; i < rowSize; ++i) {
		for (int j{ 0 }; j < colSize; ++j) {
			num += 1;
			array[i][j] = num;
			if (j + 1 % 9 != 0) {
				if (num < 10) {
					cout << "0" << array[i][j] << " ";
				}
				else if (num >= 10 && num < 100) {
					cout << array[i][j] << " ";
				}
				if (array[i][j] % 9 == 0 && array[i][j] != 0) {
					cout << "\n";
				}
			}
		}
	}
	return 0;
}