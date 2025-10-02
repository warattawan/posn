#include <iostream>
using namespace std;
int main()
{
    int N, even = 0 , odd = 0 , i ;
    cin >> N ;
    int num[N];
    for (i=0; i<N; i++) {
        cin >> num[i] ;
    }
    for (i=0; i<N; i++) {
        if (i % 2 == 0) {
            odd += num[i] ;
        } else {
            even += num[i] ;
        }
    }   
    if (odd > even) {
        cout << odd ;
    } else {
        cout << even ;
    }
} 
