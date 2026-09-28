#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,count=0;
    cin >> N;
    do {
        N /= 2;
        count++;
    } while (N!=1);
    cout << count;
}