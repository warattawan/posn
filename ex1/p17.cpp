#include <iostream>
using namespace std;
int main()
{
    int n,i,sum ;
    i = 1 ;
    sum = 1 ;
    cin >> n ;
    do {
        sum *= i ;
        i++ ;
    } while (i<=n);
    cout << sum ;
}