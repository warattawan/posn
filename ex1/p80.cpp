#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    cin >> text;
    int plus = text.find('+') ;
    int minus = text.find('-') ;
    int multiply = text.find('*') ;
    int divide = text.find('/') ;
    cout << fixed << setprecision(2) ;
    if (plus >= 0) {
        string a = text.substr(0,plus) ;
        string b = text.substr(plus+1) ;
        double num_a = stod(a) ;
        double num_b = stod(b) ;
        double sum = num_a + num_b ;
        cout << sum ;
    } else if (minus >= 0) {
        string a = text.substr(0,minus) ;
        string b = text.substr(minus+1) ;
        double num_a = stod(a) ;
        double num_b = stod(b) ;
        double sum = num_a - num_b ;
        cout << sum ;
    } else if (multiply >= 0) {
        string a = text.substr(0,multiply) ;
        string b = text.substr(multiply+1) ;
        double num_a = stod(a) ;
        double num_b = stod(b) ;
        double sum = num_a * num_b ;
        cout << sum ;
    } else if (divide >= 0) {
        string a = text.substr(0,divide) ;
        string b = text.substr(divide+1) ;
        double num_a = stod(a) ;
        double num_b = stod(b) ;
        double sum = num_a / num_b ;
        cout << sum ;
    } else {
        cout << 0.00 ;
    }
}