#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,sum=1,count=-1;
    do {
        cin >> n;
        sum += n;
        count++;
    } while (n!=-1);
    int avg = sum/count;
    cout << avg;
}