#include<iostream>
#include<string>
#include<list>
#include<vector>
using namespace std;

struct Advertising {
	int numberOfAds;
	double percentageClicked;
	double averageEarnedPerAd;
};

void printResult(Advertising ad) {
	cout << "The number of ads run were: " << ad.numberOfAds << "\n";
	cout << "The percentage of ads clicked were: " << ad.percentageClicked << "%." << "\n";
	cout << "The average earned per ad were: " << ad.averageEarnedPerAd << " dollars." << "\n";
	double total{ ad.numberOfAds * 0.01 * ad.percentageClicked * ad.averageEarnedPerAd };
	cout << "You made " << total << " dollars that day. " << "\n";
}

int main() {
	Advertising advertise{ 5, 25, 10 };
	printResult(advertise);

	return 0;
}


