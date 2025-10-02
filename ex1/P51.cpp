#include <iostream>
using namespace std;
int main()
{
    int N, K, i, j, ans=-999, len=0 ;
    cin >> N >> K;
    int num[N];
    for (i=0; i<N; i++) {
        cin >> num[i] ;
    }
    for (i=0; i<N; i++) {
        int sum = 0 ;
        for (j=i; j<N; j++) {
            sum += num[j] ;
            len = j - i + 1; 
            if (len % K == 0) {
                if (sum > ans) {
                    ans = sum;
                }
            }
        }
    } 
    cout << ans ;

} 