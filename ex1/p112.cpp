#include <bits/stdc++.h>
using namespace std ;
int main() {
    string text ;
    string re_text ;
    string *p = &re_text ;
    getline(cin, text) ;
    int count = 0;
    for (int i = 0; i<text.size(); i++) {
        text[i] = tolower(text[i]) ;
        if (text[i] == ' ' || text[i] == '.' || text[i] == '-') {
        } else {
            re_text += text[i] ;
        }
    }
    for (int i = 0; i<re_text.size(); i++) {
        int j;
        for (j = 0; j<i; j++) {
            if ((*p)[i]==(*p)[j]) {
                break;
            }
        }
        if (j==i) {
                count++ ;
        }
    }
    cout << count ;
}

