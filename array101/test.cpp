#include <bits/stdc++.h>
using namespace std;
int main() {
    string date = "2025-09-29";

    string year = date.substr(0, 4);
    cout << "Year: " << year << endl;

    string day = date.substr(8, 2);
    cout << "Day: " << day << endl; 

    string rest = date.substr(5);
    cout << "Rest: " << rest << endl; 
    return 0;
}