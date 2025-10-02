#include <iostream>
using namespace std ;
int main() 
{
    int i = 1, n, sum = 1 ;
    cin >> n ;
    while (i<=n) {
        sum *= i ;
        i++ ;
    }
    cout << sum ;
}