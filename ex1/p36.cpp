#include <iostream>
using namespace std;
int main()
{
    int n, i, sum, count ;
    cin >> n ;
    sum = 0 ;
    count = 0 ;
    int num[n];
    for (i=0; i<n; i++) {
        cin >> num[i] ;
        sum += num[i] ;
    }
    float avr = sum/n ;
    for (i=0; i<n; i++) {
        if (num[i]>avr) {
            count++ ;
        }
    }
    cout << count ;
} 