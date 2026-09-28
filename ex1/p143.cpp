#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int hour[2] ;
    int min[2] ;
    int sec[2] ;
    for (int i=0; i<2; i++) {
        cin >> hour[i] >> min[i] >> sec[i] ;
    }
    if (hour[0] < hour[1]) {
        cout << "Team 1 performed better" ;
    } else if (hour[0] > hour[1]) {
        cout << "Team 2 performed better" ;
    } else if (hour[0] == hour[1]) {
        if (min[0] < min[1]) {
            cout << "Team 1 performed better" ;
        } else if (min[0] > min[1]) {
            cout << "Team 2 performed better" ;
        } else if (min[0] == min[1]) {
            if (sec[0] < sec[1]) {
                cout << "Team 1 performed better" ;
            } else if (sec[0] > sec[1]) {
                cout << "Team 2 performed better" ;
            } else if (sec[0] == sec[1]) {
                cout << "Both teams performed equally" ;
            }
        }
    }
}