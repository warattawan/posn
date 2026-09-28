#include <bits/stdc++.h>
using namespace std ;
int main() {
    string text ;
    cin >> text ;
    char *p ;
    int count = 0;
    for (int i=0; i<text.size(); i++) {
        p = &text[i];
        if (*p =='a' || *p =='e' || *p =='i' || *p =='o' || *p =='u') {
            count++;
        }
    }
    cout << count ;
}