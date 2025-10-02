#include <iostream>
using namespace std;
int main()
{
    int N, count ;
    count = 0 ;
    cin >> N ;
    do {
        N /= 2 ;
        count++ ;
    } while (N>1) ;
    cout << count ;
} 