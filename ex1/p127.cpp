#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=n; i>=1; i-=2) {
        for (int l=0; l<2; l++) {
            for (int j=(i-1)/2; j>0; j--) {
                cout << " ";
            }
            for (int k=i; k<=n; k++) {
                cout << "*";
            }  
            for (int j=(i-1)/2; j>0; j--) {
                cout << " ";
            }
            cout << " ";
        }
        cout << '\n';
    }
    for (int i=n; i>=0; i--) {
        for (int k=i; k<n; k++) {
            cout << " ";
        }
        for (int j=1; j<=i*2+1; j++) {
            cout << "*";
        }
        for (int k=i; k<n; k++) {
            cout << " ";
        }
        cout << '\n';
    }
}