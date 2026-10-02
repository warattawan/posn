#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    cin >> text;
    for (char &c : text){
        c = toupper(c);
        cout << c;
    }
}