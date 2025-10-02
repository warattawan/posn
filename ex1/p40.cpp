#include <iostream>
using namespace std;
int main()
{
    int n, i, sum ;
    sum = 0 ;
    cin >> n ;
    int num[n];
    for (i=0; i<n; i++) {
        cin >> num[i] ;
        sum += num[i] ;
    }
    cout << sum ; 
} 