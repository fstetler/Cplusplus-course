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
	// Creates two variables as private
	int m_numerator;
	int m_denominator;

public:
	// Constructs the variables with values
	Fraction(int numerator, int denominator) {
		m_numerator = numerator;
		m_denominator = denominator;
	}
	int getNumerator() {
		return m_numerator;
	}
	int getDenominator() {
		return m_denominator;
	}
	double getValue() {
		return static_cast<double>(m_numerator) / m_denominator;
	}
};

int main() {

	Fraction frac{ 5,3 };
	cout << frac.getNumerator() << "/" << frac.getDenominator() << " = " << frac.getValue() << "\n";

	return 0;
}

