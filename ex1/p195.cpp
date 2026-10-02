#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text1,text2="";
    cin >> text1;
    int n=text1.size();
    for (int i=n-1; i>=0; i--) text2 += text1[i];
    if (text1==text2) cout << "palindrome";
    else cout << "no";
}