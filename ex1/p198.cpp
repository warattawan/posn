#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    vector<pair<int,string>> list;
    for (i=0; i<n; i++) {
        string text;
        cin >> text;
        list.push_back({text.size(),text});
    }
    sort(list.begin(), list.end());
    for (i=0; i<n; i++) {
        cout << list[i].second;
        if (i!=n-1) cout << '\n';
    }
}