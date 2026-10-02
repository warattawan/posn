#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,d,i,count=1;
    cin >> n >> d;
    vector<int> arr(n);
    vector<int> room={0};
    for (i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());

    int start = arr[n-1];
    for (i=n-2; i>=0; i--) {
        if (start-arr[i] <= d) count++ ; 
        if (start-arr[i] > d || i==0) {
            start = arr[i];
            room.push_back(count);
            count = 1;
        }
    }
    int max=-1;
    for (i=0; i<room.size(); i++) {
        if (room[i]>max) max=room[i];
    }
    cout << max;
    return 0;
}