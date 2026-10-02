#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j;
    cin >> n;
    vector<int> arr(n);
    vector<int> room={};
    for (i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());

    for (i=0; i<n/2; i++) {
        room.push_back(arr[i]+arr[n-1-i]);
    }
    cout << *max_element(room.begin(),room.end());
}