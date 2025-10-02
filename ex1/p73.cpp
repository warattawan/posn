#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text, word;
    getline(cin, text);
    getline(cin, word);
    int n = word.size() ;
    int bad_word = text.find(word) ;
    int bad_word2 = text.rfind(word) ;
    if (bad_word == -1 && bad_word2 == -1) {
        cout << text ;
    } else if  (bad_word==bad_word2){
        text.replace(bad_word,n,string(n, '*'));
        cout << text ;
    } else {
        text.replace(bad_word,n,string(n, '*'));
        text.replace(bad_word2,n,string(n, '*'));
        cout << text ;
    }
}