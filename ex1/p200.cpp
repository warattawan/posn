#include <bits/stdc++.h> 
using namespace std;
int main()
{
    string text;
    getline(cin, text);
    int count=0;
    for (char &c:text) if (isupper(c)) count++;
    cout << count;
}