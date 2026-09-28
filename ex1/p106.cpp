#include <bits/stdc++.h>
using namespace std ;
int sum = 0 ;
int a[10] ;
int *p ;

void f(int i=0) {
    if (i<10) {
        cin >> a[i] ;
        p = &a[i] ;
        if (*p % 2==0) {
            sum += *p ;
        } 
        f(i+1);
    } else {
        cout << sum;
    }
}
int main() {
    f();
}