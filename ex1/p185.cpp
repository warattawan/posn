#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,count=1,mode,freq=1,start,end;
    cin >> n;
    vector<int> arr(n);
    for (i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    for (i=1; i<n; i++) {
        if (arr[i-1]==arr[i]) count++;
        if (arr[i-1]!=arr[i] || i==n-1){
            if (count >= freq) {
                freq = count;
                mode = i-1;
            }
            count = 1;
        }
    }
    cout << "Sorted:";
    for (i=0; i<n; i++) cout << " " << arr[i];
    cout << '\n' << "Mode: " << arr[mode] << '\n' << "Frequency: " << freq;
    for (i=0; i<n; i++) {
        if (arr[i]==arr[mode]) {
            start = i;
            break;
        }
    }
    for (i=n-1; i>=0; i--) {
        if (arr[i]==arr[mode]) {
            end = i;
            break;
        }
    }
    cout << '\n' << "Start index: " << start << '\n' << "End index: " << end;
}