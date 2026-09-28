#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    string text ;
    cin >> text ;
    int n ;
    cin >> n ;
    string word[n] ;
    for (int i=0; i<n; i++) {
        cin >> word[i] ;
    }
    for (int i=0; i<n; i++) {
        int x = text.find(word[i]) ;
        if (x<0) {
            cout << "false" ;
            break;
        } else if (i==n-1) {
            cout << "true" ;
        }
    }
}