#include <iostream>
using namespace std ;
int main()
{
    int i = 1, n, sum = 0 ;
    cin >> n ;
    while (i<=n) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i ;
        }
        i++ ;
    }
    cout << sum ;
}