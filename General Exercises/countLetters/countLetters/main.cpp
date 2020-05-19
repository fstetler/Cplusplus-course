#include<iostream>
#include<string>
using namespace std;

int main(){
	char myChar{'a'};
	while (myChar <= 'z') {
		cout << myChar << "\n";
		++myChar;
	}

	return 0;
}