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

class Ball {
private:
	string m_color{"black"};
	double m_radius{}; // radius is always initialized below as 10.0

public:

	// Only need Ball with radius because calling "Ball blue" calls the constructor with both
	// color and radius. Only when calling "Ball twenty" do we need a ball which calls 
	// the second variable as value. In all the rest of the cases Ball color and radius 
	// will be called. This was the worst explanation Ive ever done. 

	Ball(double radius)
		:m_radius{ 10.0 } {};

	Ball(string color = "black", double radius = 10.0) :
		m_color{ color }, m_radius{ radius }{};

	void print() {
		cout << "color: " << m_color << ", radius: " << m_radius << "\n";
	}
};

int main() {

	Ball def{};
	def.print();

	Ball blue{ "blue" };
	blue.print();

	Ball twenty{ 20.0 };
	twenty.print();

	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();

	return 0;
}






