#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n ;
    cin >> n ;
    int power[n];
    int *p = power ;
    int new_power[n] ;
    for (int i=0; i<n; i++) {
        cin >> p[i];
    }
    new_power[0] = p[0] ;
    new_power[n-1] = p[n-1] ;
    for (int j=1; j<n-1; j++) {
        new_power[j] = p[j-1] + p[j] + p[j+1] ;
    }
    for (int k=0; k<n; k++) {
        cout << new_power[k] << " " ;
    }
}