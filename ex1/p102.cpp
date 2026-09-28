#include <bits/stdc++.h>
using namespace std ;
int a[5] ;
int b[5] ;
int *p = b;

void f(int i=0,int j=4) {
    if (i<5) {
        cin >> a[i] ;
        *(p+j) = a[i] ;
        f(i+1,j-1);
    } else {
        for (int j=0; j<5; j++) {
            cout << b[j] << " " ;
        }
    }
}

int main() {
    f();
}