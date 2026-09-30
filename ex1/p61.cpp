#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, sum=0;
    vector<pair<char,int>> list_test(n);
    cin >> n;

    for (int i=0; i<n; i++) {
        char x;
        cin >> x;
        list_test[i].first = x;
        int y;
        cin >> y;
        list_test[i].second = y;
    }

    for (int i=0; i<n; i++) {

        if (list_test[i].first=='C') {
            if (list_test[i].second==1) sum += 5;
            else sum -= 2;

        } else if (list_test[i].first=='D') {
            if (list_test[i].second==1) sum += 10;

        } else if (list_test[i].first=='B' && sum>=20) {
            if (list_test[i].second==1) sum += 15;
        }

    }
    cout << sum;
}