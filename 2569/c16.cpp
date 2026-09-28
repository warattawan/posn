#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cin >> n;
    do {
        sum+=i;
        i++;
    } while (i<=n);
    cout << sum;
}