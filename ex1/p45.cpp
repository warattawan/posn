#include <iostream>
using namespace std;
int main()
{
    int n, i, max, max_index ;
    cin >> n ;
    max_index = 0 ;
    int num[n];
    for (i=0; i<n; i++) {
        cin >> num[i] ;
    }
    max = num[0] ;   
    for (i=1; i<n; i++) {
        if (max<num[i]) {
            max = num[i] ;
            max_index = i ;
        } 
    }   
    cout << max_index ;
} 