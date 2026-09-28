#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    while (n>9) {
        n /= 10;
    }
    cout << n;
}