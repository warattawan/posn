#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int n ;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if ((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)) cout << "W" << " " ;
            if ((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)) cout << "B" << " ";
        }
        if (i!=n-1) cout << endl ;
    }
}