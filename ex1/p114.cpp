#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string text, word, next_word;
    cin >> text ;
    for (int i=1; i<text.size(); i++) {
        word = text.substr(0,i) ;
        int n = word.size() ;
        next_word = text.substr(i,n) ;
        if (word == next_word) {
            break;
        }
    }
    cout << "[" << word << " , " << text.size() / word.size() << "]";
}