#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, ans=1, i=1;
    cin >> N;
    while (i<=N) {
        ans *= i ;
        i++;
    }
    cout << ans;
}