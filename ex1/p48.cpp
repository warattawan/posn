#include <iostream>
using namespace std;
int main()
{
    int N, K, i, sum ;
    sum = 0 ;
    cin >> N >> K ;
    int num[N];
    for (i=0; i<N; i++) {
        cin >> num[i] ;
        if (num[i] > K) {
            sum += num[i] ;
        }
    }
    cout << sum ; 
} 