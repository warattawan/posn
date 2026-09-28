#include <bits/stdc++.h>
using namespace std ;
int even = 0 ;
int odd = 0 ;
int a[10] ;
int *p ;

void f(int i=0) {
    if (i<10) {
        cin >> a[i] ;
        p = &a[i] ;
        if (*p%2==0) {
            even++ ;
        } else {
            odd++ ;
        }
        f(i+1);
    } else {
        cout << "Odd number: " << odd << ", Even number: " << even;
    }
}
int main() {
    f();
}