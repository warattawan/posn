#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, max ;
    cin >> n >> m ;
    int num[n][m];
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cin >> num[i][j] ;
        }
    }
    max = num[0][0] ;   
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            if (max<num[i][j]) {
               max = num[i][j] ;
            }
        }
        cout << max << " ";     
    }   
}