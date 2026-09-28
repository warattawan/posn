#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int n, x, count = 1;
    cin >> n ;
    cout << "N : " << n << endl ;
    x = n ;
    while (x>1) {
        cout << x << endl ;
        if (x % 2 == 0) {
            x /= 2 ;
        } else {
            x = (3 * x) + 1 ;
        }
        count++ ;
    }
    cout << '1' << endl ;
    cout << "Length : " << count ;
}