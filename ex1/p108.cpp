#include <bits/stdc++.h>
using namespace std ;
int main() {
    string text ;
    cin >> text ;
    char *p ;
    for (int i=0; i<text.size(); i++) {
        p = &text[i];
        text[i] = toupper(*p) ;
    }
    cout << text ;
}