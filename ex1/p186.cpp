#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,min=999,d;
    cin >> n;
    vector<int> arr(n);
    for (i=0; i<n; i++) cin >> arr[i];
<<<<<<< HEAD
    sort(arr.begin(),arr.end());
    for (i=1; i<n; i++) {
        d = arr[i]-arr[i-1];
        if (d<=min) min = d;
    }
    cout << min << '\n' << arr[n-1]-arr[0];
=======
    for (i=1; i<n; i++) {
        d = abs(arr[i-1]-arr[i]);
        if (d<min) min = d;
    }
    sort(arr.begin(),arr.end());
    cout << d << '\n' << arr[n-1]-arr[0];
>>>>>>> 0f204b8650ca88d892a9d93116eedffb63e0b026

}