#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
double fahrenheitToCelsius(double f) {
    return (f-32)*5/9;
}

string getPotionState(double c) {
    if (c<0) return "FROZEN";
    else if (c>100) return "VAPORIZED";
    else return "LIQUID";
}