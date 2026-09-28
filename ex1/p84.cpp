#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    cin >> text ;
    int sum = 0 ;
    for (int i=0; i<text.size(); i++) {
        if (isdigit(text[i])) {
            int num = text[i] - '0' ;
            sum += num ;
        }
    }
    cout << sum ;
}