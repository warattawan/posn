#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text ;
    int count = 1 ;
    cin >> text ;
    for (int i=0; i<text.size(); i++) {
        if (text[i] == text[i+1] && i!=text.size()-1) {
            count++;
        } else {
            cout << count << text[i] ;
            count = 1;
        }
    }
}