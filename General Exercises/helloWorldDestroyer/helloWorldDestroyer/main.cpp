#include<iostream>
#include<algorithm>
#include<limits>
#include<string>
#include<array>
#include<vector>
#include<iterator>
#include<numeric>
#include<list>
#include<cstdint>
#include<chrono>
using namespace std;

class HelloWorld {
private:
	char* m_data{};

public:
	HelloWorld() {
		m_data = new char[14];
		const char* init{ "Hello, World!" };
		for (int i = 0; i < 14; ++i) {
			m_data[i] = init[i];
		}
	}

	~HelloWorld() {
		delete[] m_data;
	}

	void print() const {
		cout << m_data << "\n";
	}
};

int main() {

	HelloWorld hello{};
	hello.print();

	return 0;
}


