#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans=1, i=1;
    cin >> n;
    while (i<=n) {
        ans *= i;
        i++;
    }
    cout << ans;
}