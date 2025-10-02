#include <iostream>
using namespace std;
int main()
{
    int n,i,sum ;
    i = 0 ;
    sum = 0 ;
    cin >> n ;
    do {
        sum += i ;
        i++ ;
    } while (i<=n);
    cout << sum ;
}