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

int main() {

	vector<int> myVec{ 1,2,3 };

	for (int i{ 0 }; i < myVec.size(); ++i) {
		cout << myVec[i] << " ";
	}

	myVec.insert(myVec.begin() + 2, 5);

	cout << "\n";
	for (int i{ 0 }; i < myVec.size(); ++i) {
		cout << myVec[i] << " ";
	}

	return 0;
}


