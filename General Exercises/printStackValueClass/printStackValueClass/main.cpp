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

class Stack {

private:
	array<int, 10> myArray{};
	int next{};

public:
	void reset() {
		next = 0;
	}

	bool push(int value) {
		if (next == myArray.size()) {
			return false;
		}

		myArray[next++] = value;
		return true;
	}

	int pop() {
		return myArray[--next];
	}

	void print() {
		cout << "( ";
		for (int i{ 0 }; i < next; ++i) {
			cout << myArray[i] << " ";
		}
		cout << ")" << "\n";
	}

};

int main() {


	Stack stack;

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.reset();
	stack.print();

	return 0;
}


