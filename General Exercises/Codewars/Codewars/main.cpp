#include<string>
#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;

string seriesSum(int n)
{
    double sum{ 0 };
    for (double i{ 0 }; i < n; ++i) {
        double frac = 1 / (1 + 3 * i);
        sum += frac;
    }
    char str[3];
    sprintf(str, "%.2f", sum);
    return str;
}

int main() {

    return 0;
}