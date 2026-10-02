#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    cin >> text;
    int n=text.size();
    for (int i=n-1; i>=0; i--) cout << text[i];
}