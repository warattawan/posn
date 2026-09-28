#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n ;
    cin >> n;
    for (int r=n-1; r>=0 ; r--) {
        int C = 1 ;
        cout << C << ' ';
        for (int k=0; k<=r-1; k++) {
            C = C * (r-k) / (k+1) ;
            cout <<  C  << ' ';
        }
        if (r!=0) {
            cout << endl ;
        }
    } 
}