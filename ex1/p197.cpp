#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string text;
    cin >> k >> text;
    for (char &c : text){
        int n = (int)c;
        c = (char)n+k;
        cout << c;
    }
}