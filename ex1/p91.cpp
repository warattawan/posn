#include <bits/stdc++.h>
using namespace std;
int total = 1;
int nums(int n, int i) {
    if (i<=n) {
        int x ;
        cin >> x ;
        total *= x ;
        return nums(n,i+1);
    } else {
        return total ;
    }
}
int main()
{
    int n;
    cin >> n;
    total = 1;
    cout << "The result is: " << nums(n,1) ;
    return 0;
}