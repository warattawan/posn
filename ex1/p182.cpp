#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,count=0;
    bool finish = false;
    cin >> n;
    vector<int> arr(n);
    for (i=0; i<n; i++) cin >> arr[i];

    while (finish==false) { 
        int p_count = count;
        for(i=0; i<n-1; i++) {
            if (arr[i]>arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp; 
                count++;
            }
        }
        if (count == p_count) finish = true;
    }
    cout << count;
}