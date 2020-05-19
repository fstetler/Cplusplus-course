#include<iostream>
#include<cmath>
using namespace std;

double heightOfTower() {
	while (true) {	
		cout << "Enter the height of the tower (in meters): " << "\n";
		double height{};
		cin >> height;

		// Incorrect type of input? Handle it!
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Oops, wrong type of input, try again! " << "\n";
		}
		else {
			cin.ignore(32767, '\n');
			return height;
		}
	}
}

constexpr double g() {
	constexpr double g{ 9.8 }; // constant gravity never changes
	return g;
}

double secondsCalculator(double g, int height) {
	//double height{ g * pow(seconds,2) / 2 };
	double seconds{ sqrt(2 * height / g) };
	return seconds;
}

void printResult(double seconds) {
	cout << "It takes " << seconds << " seconds for the ball to reach the floor. " << "\n";
}

int main() {

	double heightTower{ heightOfTower() };
	double seconds{ secondsCalculator(g(), heightTower )};

	printResult(seconds);

	return 0;
}



