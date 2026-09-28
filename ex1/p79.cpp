#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text ;
    getline(cin, text) ;
    string rev_text ;
    for (char &c : text) {
        if (isalnum(c)) {
            text += (char)tolower(c);
        }
    }
    for (int i=text.size()-1; i>=0; i--) {
        rev_text += text[i] ;
    }
    if (text == rev_text) {
        cout << "YES"  ;
    } else {
        cout << "NO"  ;
    }
    return 0 ;
}