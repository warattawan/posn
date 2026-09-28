#include <bits/stdc++.h>
using namespace std ;
int x = 0;
int *px = &x;
void f(int x,int i=1) {
    if (i<=5) {
        cin >> x;
        if (x > *px) {
            px = &x;
        }
        f(x,i+1);
    } else {
        cout << *px;
    }
}
int main() {
    int x = 0;
    f(x) ;
}