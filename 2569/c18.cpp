#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i=2;
    cin >> n;
    do {
        if(n%i==0 && i!=n) {
            cout << 'n';
            break;
        }
        if(i==n) cout << 'y';
        i++;
    } while (i<=n);
}