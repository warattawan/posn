#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count=0, i;
    cin >> n;
    do {
        n /= 10;
        count++;
    } while (n>0);
    cout << count;
}