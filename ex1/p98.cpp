#include <bits/stdc++.h>
using namespace std ;
int sum = 0 ;
int *px ;
int f(int x,int i=1) {
    if (i<=5) {
        cin >> x;
        px = &x;
        sum += *px ;
        return f(x,i+1);
    } else {
        return sum;
    }
}
int main() {
    int x ;
    int *px ;
    cout << f(x) ;
}