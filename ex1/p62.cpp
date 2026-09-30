#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, sum=0;
    cin >> n;
    vector<pair<int,int>> test(n);
    for (int i=0; i<n; i++) {
        int x,y;
        cin >> x >> y;
        test[i].first = x;
        test[i].second = y;
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (test[i].first == test[j].first && i!=j) {
                if (test[i].second < test[j].second) test[i].second=0;
            }
        }
    }
    for (int i=0; i<test.size(); i++) sum += test[i].second;
    cout << sum;
}