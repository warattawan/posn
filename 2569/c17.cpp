#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,ans=1;
    cin >> n;
    do {
        ans*=i;
        i++;
    } while (i<=n);
    cout << ans;
}