#include<iostream>
#include<string>
using namespace std;

int main() {
	int num{ 5 };
	while (num > 0) {
		int num2{ num };
		while (num2 > 0) {
			cout << num2-- << ' ';
		}
		cout << '\n';
		--num;
	}
	
	return 0;
}