#include <iostream>
using namespace std;
int main()
{
    int n, i, even ;
    cin >> n ;
    even = 0 ;
    int num[n];
    for (i=0; i<n; i++) {
        cin >> num[i] ;
        if (num[i]%2==0) {
            even++ ;
        }
    }
    cout << even ;
} 