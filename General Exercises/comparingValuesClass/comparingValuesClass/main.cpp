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

class Point3d {
	int m_x;
	int m_y;
	int m_z;

public:
	void setValues(int v1, int v2, int v3) {
		m_x = v1;
		m_y = v2;
		m_z = v3;
	}

	void print() {
		cout << "<" << m_x << ", " << m_y << ", " << m_z << ">";
	}

	bool isEqual(Point3d& p) {
		if (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {

	Point3d point1;
	point1.setValues(1, 2, 3);

	Point3d point2;
	point2.setValues(1, 2, 3);

	if (point1.isEqual(point2)) {
		cout << "Point1 and Point2 are equal." << "\n";
	}
	else {
		cout << "Point1 and Point2 are not equal." << "\n";
	}

	Point3d point3;
	point3.setValues(3, 4, 5);

	if (point1.isEqual(point3)) {
		cout << "Point1 and Point2 are equal." << "\n";
	}
	else {
		cout << "Point1 and Point2 are not equal." << "\n";
	}

	return 0;
}



