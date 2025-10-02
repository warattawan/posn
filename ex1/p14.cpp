#include <iostream>
using namespace std;
int main()
{
    int n ;
    int x = 0 ;
    cin >> n ;
    while (n>0) {
        int d = n % 10 ;
        x = x * 10 + d ;
        n /= 10 ;
    }
    cout << x ;
}