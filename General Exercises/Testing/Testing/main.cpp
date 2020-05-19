#include<iostream>
using namespace std;

int main() {
	
	int x{ 7 };
	int* ptr{ new int };
	ptr = &x;
	cout << *ptr;
	return 0;
}









