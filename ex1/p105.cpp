#include <bits/stdc++.h>
using namespace std ;
int main() {
    int a[10] ;
    int sum = 0 ;
    for (int i=0; i<10; i++) {
        cin >> a[i] ;
        sum += a[i] ;
    }
    int avg = sum/10;
    int *p = &avg ;
    int count = 0 ;
    for (int i= 0; i<10; i++) {
        if (a[i] > *p) {
          count++;  
        }
    }
    cout << count ;
}