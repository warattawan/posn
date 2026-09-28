#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int moodeng(int n, int i) {
    if (i<=n) {
        int x ;
        cin >> x ;
        sum += x ;
        return moodeng(n,i+1);
    } else {
        int avg = sum/n ;
        return avg ;
    }
    
}
int main()
{
    int n;
    cin >> n;
    sum = 0 ;
    cout << moodeng(n,1) ;
}