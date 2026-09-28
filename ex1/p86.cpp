#include <bits/stdc++.h>
using namespace std;
int text [100][100] ;
string s;
int min_d(int i, int j) {
    if (i >= j) {
        return 0;
    }
    if (text[i][j]!=-1) {
        return text[i][j] ;
    }
    if (s[i] == s[j]) {
        text[i][j] = min_d(i+1, j-1) ;
    } else {
        int a = min_d(i + 1, j);
        int b = min_d(i, j - 1);
        text[i][j] = 1 + min(a, b);
    }
    return text[i][j];
}
int main()
{
    cin >> s;
    int n = s.size() ;
    memset(text,-1,sizeof(text)) ;
    int x = min_d(0,n-1) ;
    cout << "Minimum Deletions: " << x << endl;
    cout << "(LPS): " << n-x ;
}