#include <bits/stdc++.h> 
using namespace std;
int total = 1 ;
int expn (int n, int m,int i = 1) {
    if (i>m) {
        return total ;
    }
    total *=n ;
    return expn(n, m, i+1);
    
}
int main()
{
    int n,m;
    cin >> n >> m;
    total = 1 ;
    cout << expn(n,m) ;
}