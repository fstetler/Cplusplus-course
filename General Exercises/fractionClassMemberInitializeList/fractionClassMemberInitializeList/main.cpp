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

class Fraction {
private:
	int m_numerator{};
	int m_denominator{};
public:

	Fraction(int numerator, int denominator)
		: m_numerator{ numerator }, m_denominator{ denominator }{}

	double getValue() {
		return static_cast<double> (m_denominator) / m_numerator;
	}

	void printResult() {
		cout << m_numerator << "/" << m_denominator << " = " << getValue() << "\n";
	}
};

int main() {

	Fraction frac{ 5,3 };
	frac.printResult();

	return 0;
}








