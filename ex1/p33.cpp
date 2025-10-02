#include <iostream>
using namespace std;
int main()
{
    int n, i, min ;
    cin >> n ;
    int num[n];
    for (i=0; i<n; i++) {
        cin >> num[i] ;
    }
    min = num[0] ;   
    for (i=1; i<n; i++) {
        if (min>num[i]) {
            min = num[i] ;
        } 
    }   
    cout << min ;
} 