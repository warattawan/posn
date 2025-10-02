#include <iostream>
using namespace std;
int main() 
{
    int i = 1 ;
    int n ;
    cin >> n ;
    do {
        cout << i << '\t' ;
        i++ ;
    } while (i<=n) ;
    i = 1 ;
    while (i<=n) {
        cout << i << '\n' ;
        i++ ;
    }
}