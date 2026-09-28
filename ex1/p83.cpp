#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text ;
    cin >> text ;
    int n = text.size() ;
    for (int i=n-1; i>0; i--) {  
        for (int j=0; j<i; j++) {
            if(text[j]>text[j+1]) {
                char temp = text[j];
                text[j] = text[j+1];
                text[j+1] = temp;
            }
        }
    }
    vector<int> count(26, 0);
    for (char c : text) {
        if (c >= 'a' && c <= 'z') count[c - 'a']++;
    }
    int max = 0;
    for (int i = 0; i < 26; i++) if (count[i] > max) max = count[i];
    for (int f = max; f >= 1; f--) {
        for (int i = 0; i < 26; i++) {
            if (count[i] == f) {
                for (int k = 0; k < f; k++) {
                    cout << char('a' + i);
                }
            }
        }
    }
}