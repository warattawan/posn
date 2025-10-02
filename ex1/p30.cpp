#include <iostream>
using namespace std ;
int main()
{
    int i = 1, n ;
    float sum = 0.0 ;
    cin >> n ;
    while (i<=n) {
        sum += i ;
        i++ ;
    }
    cout << float(sum/n) ;
}