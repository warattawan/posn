#include <iostream>
using namespace std;
int main()
{
    int n, count;
    count = 1 ;
    cin >> n ;
    do {
        n /= 10 ;
        count++ ;
    } while (n>=10) ;
    cout << count ;
}