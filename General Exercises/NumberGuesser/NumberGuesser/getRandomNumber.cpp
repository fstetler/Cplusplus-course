#include<iostream>
#include<random>
#include<ctime>

using namespace std;

namespace MyRandom {
	mt19937 mersenne{ static_cast<mt19937::result_type>(time(nullptr)) };
}

int getRandomNumber(int min, int max) {
	uniform_int_distribution<>die{ min, max };
	return die(MyRandom::mersenne);
}