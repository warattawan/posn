#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,d,i,j;
    cin >> n >> d;
    vector<int> arr(n);
    vector<int> room={1};
    for (i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());

    for (i=n-1; i>=0; i--) {           
        int count = 0;
        for (j=i; j>=0 && arr[i]-arr[j] <= d; j--) count++;
        room.push_back(count);
    }

    int max=-1;
    for (i=0; i<room.size(); i++) {
        if (room[i]>max) max=room[i];
    }
    cout << max;
    return 0;
}