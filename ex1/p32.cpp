#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i = 0 ;
    cin >> n ;
    int num[n] ;
    while (i<n) {
        cin >> num[i] ;
        sum += num[i] ;
        i++ ;
    }
    cout << sum ;
}