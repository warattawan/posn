#include <bits/stdc++.h> 
int main() 
{
    string text, word_2 ;
    cin >> text ;
    int n = text.size() ;
    string word_1 = text.substr(0,int(n/2)) ;
    if (n%2==0) {
        word_2 = text.substr(int(n/2)) ;
    } else {
        word_2 = text.substr(int(n/2)+1) ;
    }
    string re_word1, re_word2 ;
    for (int j=word_1.size()-1; j>=0; j--) {
        re_word1 += word_1[j] ;
        re_word2 += word_2[j] ;
    }
    if (n%2==0) {
        cout << re_word1 + re_word2 ;
    } else {
        cout << re_word1 + text[n/2] + re_word2 ;
    }
} 