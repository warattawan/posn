#include <iostream>
using namespace std ;
int main()
{
    int i = 1, n, even = 0, odd = 0;
    cin >> n ;
    while (i<=n) {
        if (i % 2 == 0) {
            even += i ;
        } else {
            odd += i ;
        }
        i++ ;
    }
    cout << even - odd ;
}