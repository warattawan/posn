#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,degree;
    cin >> n;
    int arr[n][n];
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> arr[i][j];
    cin >> degree;
    if (degree==90) {
        for (int j=0; j<n; j++) {
            for (int i=n-1; i>=0; i--) {
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
    } else if (degree==180) {
        for (int i=n-1; i>=0; i--) {
            for (int j=n-1; j>=0; j--) {
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
    } else if (degree==270) {
        for (int j=n-1; j>=0; j--) {
            for (int i=0; i<n; i++) {
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
    }
}