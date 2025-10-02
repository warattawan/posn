#include <iostream>
using namespace std ;
int main() 
{
    int i = 1, j = 1, n, sum = 0 ;
    cin >> n ;
    while (i<=n) {
        for (j=1; j<=i; j++) {
            if (i == 1) {
                break;
            }
            if (i % j == 0 && j != 1 && j != i && i != 2) {
                break;
            } else if (j == i || i == 2) {
                sum += i ;
            }
            j++ ;
        }
        i++ ;
    }
    cout << sum ;
}

