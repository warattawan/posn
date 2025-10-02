#include <iostream>
using namespace std;
int main()
{
    int N ;
    int i = 1 ;
    int sum = 1 ;
    cin >> N ;
    do {
        sum *= i ;
        i += 1 ;
    } while (i <= N) ;
    cout << sum ;
}