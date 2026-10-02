#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text1, text2;
    cin >> text1 >>text2;
    if (text1.size()>text2.size()) cout << "1>2";
    else if (text1.size()<text2.size()) cout << "1<2";
    else cout << "1=2";
}