#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, sum ;
    sum = 0 ;
    cin >> n >> m ;
    int num[n][m];
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cin >> num[i][j] ;
            sum += num[i][j] ;
        }
    }
    cout << sum ; 
} 