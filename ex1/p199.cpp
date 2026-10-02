#include <bits/stdc++.h> 
using namespace std;
int main()
{
    string text;
    char mod;
    int count=0;
    vector<pair<int,char>> list;
    getline(cin, text);
    for (char &a : text) {
        for (char &b : text) {
            if (a==b) {
                count ++;
                mod = a;
            }
        }
        list.push_back({count,mod});
        count = 0;
    }
    sort(list.begin(),list.end());
    int f = list.size()-1;
    cout << list[f].second << " " << list[f].first;
}
