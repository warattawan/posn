#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int n, N, sum = 0, t, count = 0 ;
    cin >> N ;
    n = N * N ;
    int num[n] ;
    int w[10] = {90,45,78,52,99,60,31,85,70,55} ;
    for (int i=0; i<n; i++) {
        cin >> num[i] ;
        sum += num[i] ;
    }
    cin >> t;
    for (int j=0; j<10; j++) {
        if (w[j] >= t) {
            count++;
        }
    }
    cout << "--- START L1 ---" << endl << N << endl << "N = " << n << endl ;
    cout << "--- START L2 ---" << endl ;
    for (int k=0; k<n; k++) {
        cout << num[k] << endl ;
    }
    cout << "Sum = " << sum << endl;
    cout << "--- START L3 ---" << endl << t << endl << count << " warriors selected." ;
}