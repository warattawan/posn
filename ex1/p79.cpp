#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text,newtext="";
    getline(cin, text) ;
    string rev_text ;
    for (char &c : text) {
        if (isalpha(c)) {
            newtext += tolower(c);
        } else if (isdigit(c)) newtext += c;
    }
    for (int i=newtext.size()-1; i>=0; i--) {
        rev_text += newtext[i];
    }
    if (newtext == rev_text) {
        cout << "YES"  ;
    } else {
        cout << "NO"  ;
    }
    return 0 ;
}