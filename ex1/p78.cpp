#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string text,Y,M,D;
    set<int> M30 = {4,6,9,11}, M31 = {1,3,5,7,8,10,12}, M29 = {2};
    cin >> text;
    if (text.size()!=10) {
        cout << "Invalid date."; 
        return 0;
    }

    size_t pos1 = text.find('-'), pos2 = text.rfind('-');
    Y = text.substr(0,pos1);
    M = text.substr(pos1+1,pos2-pos1-1);
    D = text.substr(pos2+1);

    int M_i = stoi(M), D_i = stoi(D);
    if (M_i > 12) {
        cout << "Invalid month."; 
        return 0;
    }
    else if (D_i > 31) {
        cout << "Invalid Day."; 
        return 0;
    }
    else if (M30.count(M_i) && M_i>30) {
        cout << "Invalid Day."; 
        return 0;
    }
    else if (M31.count(M_i) && M_i>31) {
        cout << "Invalid Day.";
        return 0;
    }
    else if (M29.count(M_i) && M_i>29) {
        cout << "Invalid Day.";
        return 0;
    }
    cout << Y << '/' << M << '/' << D;
}