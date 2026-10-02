#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    int a=arr[n-3], b=arr[n-2], c=arr[n-1];
    if (pow(c,2)==pow(a,2)+pow(b,2)) cout << '\n' << "YES";
    else cout << '\n' << "NO";
}