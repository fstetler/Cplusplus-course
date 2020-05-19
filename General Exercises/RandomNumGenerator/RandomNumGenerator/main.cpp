#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<random>
using namespace std;

int getRandomNumber() {
	srand(static_cast<unsigned int>(time(nullptr)));
	int random{ rand() };
	int left{ random % 7 };
	return left;
}

int main() {

	cout << getRandomNumber();

	return 0;
}