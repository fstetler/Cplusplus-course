#include<iostream>
#include<cmath>
using namespace std;

double heightOfTower() {
	cout << "Enter the height of the tower (in meters): " << "\n";
	double height{};
	cin >> height;
	return height;
}

constexpr double g() {
	constexpr double g{ 9.8 };
	return g;
}

double heightCalculator(double g, int seconds) {
	double height1{ g * pow(seconds,2) / 2 };
	return height1;
}


void printResult(double height, double heightCalculator, int seconds) {
	if ((height - heightCalculator) >= 0)
		cout << "At " << seconds << ", the ball is at height " << height - heightCalculator << "\n";
	else
		cout << "At " << seconds << ", the ball is on the ground." << "\n";
}

int main() {

	double heightTower{ heightOfTower() };

	double height0Calculator{ heightCalculator(g(), 0) };
	double height1Calculator{ heightCalculator(g(), 1) };
	double height2Calculator{ heightCalculator(g(), 2) };
	double height3Calculator{ heightCalculator(g(), 3) };
	double height4Calculator{ heightCalculator(g(), 4) };
	double height5Calculator{ heightCalculator(g(), 5) };

	printResult(heightTower, height0Calculator, 0);
	printResult(heightTower, height1Calculator, 1);
	printResult(heightTower, height2Calculator, 2);
	printResult(heightTower, height3Calculator, 3);
	printResult(heightTower, height4Calculator, 4);
	printResult(heightTower, height5Calculator, 5);

	return 0;
}



