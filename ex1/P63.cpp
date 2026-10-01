#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, P=0, S=0, C=0;
    cin >> n;
    vector<vector<int>> list(n,vector<int> (3));
    for (int i=0; i<n; i++) {
        for (int j=0; j<3; j++) {
            cin >> list[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<3; j++) {
            if (j==0) P+=list[i][j];
            else if (j==1) S+=list[i][j];
            else C+=list[i][j];
        }
    }
    vector<pair<int,string>> user = {{P,"Peanut"}, {S,"Pete"}, {C,"Chertam"}};
    for (int i=0; i<3; i++) cout << user[i].second << ": " << user[i].first << '\n';
    stable_sort(user.begin(), user.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
        return a.first < b.first;
    });
    int max = user[2].first;
    if (user[1].first == max && user[0].first == max) cout << "Winner: Peanut & Pete & Chertam Score: " << max;
    else if (user[1].first == max) {
        cout << "Winner: " << user[1].second << " & " << user[2].second << " " << "Score: " << max;
    } else cout << "Winner: " << user[2].second << " " << "Score: " << max;
    
}