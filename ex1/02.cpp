#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0;
    cin >> n;
    vector<int> list(n);
    for (int i=0; i<n; i++) cin >> list[i];
    for (int i=0; i<n-1; i++) {
        if (list[i]>list[i+1]) {count++;}
    }
    cout << n-count;
}