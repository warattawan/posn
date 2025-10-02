#include <bits/stdc++.h>
using namespace std;
int main()
{
    string file_name;
    cin >> file_name;
    int dot = file_name.rfind('.') ;
    string name = file_name.substr(0,dot) ;
    cout << name << endl ;
    string last_name = file_name.substr(dot+1) ;
    cout << last_name << endl ;
}