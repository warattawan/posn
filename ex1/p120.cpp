#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int n, count=0 ;
    cin >> n ;
    int tower[n] ;
    for (int i=0; i<n; i++) {
        cin >> tower[i] ;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i==j) continue;
            else if (i > j) continue;
            else if (i==j+1) count++ ;
            else {
                int Max = 0;                 
                for (int k = i + 1; k < j; ++k) { 
                    Max = max(Max, tower[k]);
                }
                if (Max < min(tower[i], tower[j])) {
                    count++;                       
                }
            }
        }
    }
    cout << count ;
}