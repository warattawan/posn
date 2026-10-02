#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,d,i,count=1;
    cin >> n >> d;
    vector<int> arr(n);
    vector<int> room={};
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
    cout << *max_element(room.begin(),room.end());
}