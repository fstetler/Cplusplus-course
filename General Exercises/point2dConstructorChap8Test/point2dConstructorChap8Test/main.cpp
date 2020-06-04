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

class Point2d {
private:
	double m_x{ 0.0 };
	double m_y{ 0.0 };

public:
	Point2d() {}

	Point2d(double x, double y)
		: m_x{ x }, m_y{ y }{}

	void print() {
		cout << "Point2d(" << m_x << ", " << m_y << ")\n";
	}

	friend double distanceFrom(Point2d first, Point2d other);
};

double distanceFrom(Point2d first, Point2d other) {
	return sqrt((first.m_x - other.m_x) * (first.m_x - other.m_x) + (first.m_y - other.m_y) * (first.m_y - other.m_y));
}

int main() {

	Point2d first{};
	Point2d second{ 3.0, 4.0 };
	first.print();
	second.print();
	cout << "Distance between the points is " << distanceFrom(first, second) << "\n";

	return 0;
}
